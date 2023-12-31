cmake_minimum_required(VERSION 3.8)

project(BookStore-gRPC)

#include(cmake/common.cmake)

set(protobuf_MODULE_COMPATIBLE TRUE)
find_package(Protobuf CONFIG REQUIRED)
message(STATUS "Using protobuf ${protobuf_VERSION}")

set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)

find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")
set(_GRPC_GRPCPP gRPC::grpc++)
set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)

# Proto file
get_filename_component(hw_proto "bookstore_proto.proto" ABSOLUTE)
get_filename_component(hw_proto_path "${hw_proto}" PATH)

# set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_REFLECTION gRPC::grpc++_reflection)

# Generated sources
set(hw_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/bookstore_proto.pb.cc")
set(hw_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/bookstore_proto.pb.h")
set(hw_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/bookstore_proto.grpc.pb.cc")
set(hw_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/bookstore_proto.grpc.pb.h")
add_custom_command(
        OUTPUT "${hw_proto_srcs}" "${hw_proto_hdrs}" "${hw_grpc_srcs}" "${hw_grpc_hdrs}"
        COMMAND ${_PROTOBUF_PROTOC}
        ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${hw_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${hw_proto}"
        DEPENDS "${hw_proto}")

# Include generated *.pb.h files

# hw_grpc_proto
add_library(hw_grpc_proto
        ${hw_grpc_srcs}
        ${hw_grpc_hdrs}
        ${hw_proto_srcs}
        ${hw_proto_hdrs})
target_link_libraries(hw_grpc_proto
        ${_REFLECTION}
        ${_GRPC_GRPCPP}
        ${_PROTOBUF_LIBPROTOBUF})

# Targets greeter_[async_](client|server)
foreach(_target
        bookstore_client bookstore_server)
    add_executable(${_target} "${_target}.cc"
            ${hw_proto_srcs}
            ${hw_grpc_srcs})
    target_link_libraries(${_target}
            ${_REFLECTION}
            ${_GRPC_GRPCPP}
            ${_PROTOBUF_LIBPROTOBUF})
endforeach()