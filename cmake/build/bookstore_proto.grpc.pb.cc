// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bookstore_proto.proto

#include "bookstore_proto.pb.h"
#include "bookstore_proto.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace store {

static const char* BookStore_method_names[] = {
  "/store.BookStore/GetBookRequest",
  "/store.BookStore/CreateBookRequest",
  "/store.BookStore/EditBookRequest",
  "/store.BookStore/DeleteBookRequest",
};

std::unique_ptr< BookStore::Stub> BookStore::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< BookStore::Stub> stub(new BookStore::Stub(channel, options));
  return stub;
}

BookStore::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetBookRequest_(BookStore_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateBookRequest_(BookStore_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EditBookRequest_(BookStore_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteBookRequest_(BookStore_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status BookStore::Stub::GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq& request, ::store::BookList* response) {
  return ::grpc::internal::BlockingUnaryCall< ::store::GetReq, ::store::BookList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetBookRequest_, context, request, response);
}

void BookStore::Stub::async::GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq* request, ::store::BookList* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::store::GetReq, ::store::BookList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetBookRequest_, context, request, response, std::move(f));
}

void BookStore::Stub::async::GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq* request, ::store::BookList* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetBookRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::store::BookList>* BookStore::Stub::PrepareAsyncGetBookRequestRaw(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::store::BookList, ::store::GetReq, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetBookRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::store::BookList>* BookStore::Stub::AsyncGetBookRequestRaw(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetBookRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status BookStore::Stub::CreateBookRequest(::grpc::ClientContext* context, const ::store::BookCreateInfo& request, ::store::BookInfo* response) {
  return ::grpc::internal::BlockingUnaryCall< ::store::BookCreateInfo, ::store::BookInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateBookRequest_, context, request, response);
}

void BookStore::Stub::async::CreateBookRequest(::grpc::ClientContext* context, const ::store::BookCreateInfo* request, ::store::BookInfo* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::store::BookCreateInfo, ::store::BookInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateBookRequest_, context, request, response, std::move(f));
}

void BookStore::Stub::async::CreateBookRequest(::grpc::ClientContext* context, const ::store::BookCreateInfo* request, ::store::BookInfo* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateBookRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::store::BookInfo>* BookStore::Stub::PrepareAsyncCreateBookRequestRaw(::grpc::ClientContext* context, const ::store::BookCreateInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::store::BookInfo, ::store::BookCreateInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateBookRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::store::BookInfo>* BookStore::Stub::AsyncCreateBookRequestRaw(::grpc::ClientContext* context, const ::store::BookCreateInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateBookRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status BookStore::Stub::EditBookRequest(::grpc::ClientContext* context, const ::store::BookInfo& request, ::store::BookInfo* response) {
  return ::grpc::internal::BlockingUnaryCall< ::store::BookInfo, ::store::BookInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EditBookRequest_, context, request, response);
}

void BookStore::Stub::async::EditBookRequest(::grpc::ClientContext* context, const ::store::BookInfo* request, ::store::BookInfo* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::store::BookInfo, ::store::BookInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EditBookRequest_, context, request, response, std::move(f));
}

void BookStore::Stub::async::EditBookRequest(::grpc::ClientContext* context, const ::store::BookInfo* request, ::store::BookInfo* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EditBookRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::store::BookInfo>* BookStore::Stub::PrepareAsyncEditBookRequestRaw(::grpc::ClientContext* context, const ::store::BookInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::store::BookInfo, ::store::BookInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EditBookRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::store::BookInfo>* BookStore::Stub::AsyncEditBookRequestRaw(::grpc::ClientContext* context, const ::store::BookInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEditBookRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status BookStore::Stub::DeleteBookRequest(::grpc::ClientContext* context, const ::store::DeleteReq& request, ::store::StatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::store::DeleteReq, ::store::StatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DeleteBookRequest_, context, request, response);
}

void BookStore::Stub::async::DeleteBookRequest(::grpc::ClientContext* context, const ::store::DeleteReq* request, ::store::StatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::store::DeleteReq, ::store::StatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteBookRequest_, context, request, response, std::move(f));
}

void BookStore::Stub::async::DeleteBookRequest(::grpc::ClientContext* context, const ::store::DeleteReq* request, ::store::StatusResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteBookRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::store::StatusResponse>* BookStore::Stub::PrepareAsyncDeleteBookRequestRaw(::grpc::ClientContext* context, const ::store::DeleteReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::store::StatusResponse, ::store::DeleteReq, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DeleteBookRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::store::StatusResponse>* BookStore::Stub::AsyncDeleteBookRequestRaw(::grpc::ClientContext* context, const ::store::DeleteReq& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteBookRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

BookStore::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BookStore_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BookStore::Service, ::store::GetReq, ::store::BookList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BookStore::Service* service,
             ::grpc::ServerContext* ctx,
             const ::store::GetReq* req,
             ::store::BookList* resp) {
               return service->GetBookRequest(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BookStore_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BookStore::Service, ::store::BookCreateInfo, ::store::BookInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BookStore::Service* service,
             ::grpc::ServerContext* ctx,
             const ::store::BookCreateInfo* req,
             ::store::BookInfo* resp) {
               return service->CreateBookRequest(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BookStore_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BookStore::Service, ::store::BookInfo, ::store::BookInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BookStore::Service* service,
             ::grpc::ServerContext* ctx,
             const ::store::BookInfo* req,
             ::store::BookInfo* resp) {
               return service->EditBookRequest(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BookStore_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BookStore::Service, ::store::DeleteReq, ::store::StatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BookStore::Service* service,
             ::grpc::ServerContext* ctx,
             const ::store::DeleteReq* req,
             ::store::StatusResponse* resp) {
               return service->DeleteBookRequest(ctx, req, resp);
             }, this)));
}

BookStore::Service::~Service() {
}

::grpc::Status BookStore::Service::GetBookRequest(::grpc::ServerContext* context, const ::store::GetReq* request, ::store::BookList* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BookStore::Service::CreateBookRequest(::grpc::ServerContext* context, const ::store::BookCreateInfo* request, ::store::BookInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BookStore::Service::EditBookRequest(::grpc::ServerContext* context, const ::store::BookInfo* request, ::store::BookInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BookStore::Service::DeleteBookRequest(::grpc::ServerContext* context, const ::store::DeleteReq* request, ::store::StatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace store

