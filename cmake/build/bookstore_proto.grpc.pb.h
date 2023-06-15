// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bookstore_proto.proto
#ifndef GRPC_bookstore_5fproto_2eproto__INCLUDED
#define GRPC_bookstore_5fproto_2eproto__INCLUDED

#include "bookstore_proto.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace store {

class BookStore final {
 public:
  static constexpr char const* service_full_name() {
    return "store.BookStore";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq& request, ::store::BookList* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::store::BookList>> AsyncGetBookRequest(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::store::BookList>>(AsyncGetBookRequestRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::store::BookList>> PrepareAsyncGetBookRequest(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::store::BookList>>(PrepareAsyncGetBookRequestRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq* request, ::store::BookList* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq* request, ::store::BookList* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::store::BookList>* AsyncGetBookRequestRaw(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::store::BookList>* PrepareAsyncGetBookRequestRaw(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq& request, ::store::BookList* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::store::BookList>> AsyncGetBookRequest(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::store::BookList>>(AsyncGetBookRequestRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::store::BookList>> PrepareAsyncGetBookRequest(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::store::BookList>>(PrepareAsyncGetBookRequestRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq* request, ::store::BookList* response, std::function<void(::grpc::Status)>) override;
      void GetBookRequest(::grpc::ClientContext* context, const ::store::GetReq* request, ::store::BookList* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::store::BookList>* AsyncGetBookRequestRaw(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::store::BookList>* PrepareAsyncGetBookRequestRaw(::grpc::ClientContext* context, const ::store::GetReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetBookRequest_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetBookRequest(::grpc::ServerContext* context, const ::store::GetReq* request, ::store::BookList* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetBookRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetBookRequest() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetBookRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBookRequest(::grpc::ServerContext* /*context*/, const ::store::GetReq* /*request*/, ::store::BookList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetBookRequest(::grpc::ServerContext* context, ::store::GetReq* request, ::grpc::ServerAsyncResponseWriter< ::store::BookList>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetBookRequest<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetBookRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetBookRequest() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::store::GetReq, ::store::BookList>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::store::GetReq* request, ::store::BookList* response) { return this->GetBookRequest(context, request, response); }));}
    void SetMessageAllocatorFor_GetBookRequest(
        ::grpc::MessageAllocator< ::store::GetReq, ::store::BookList>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::store::GetReq, ::store::BookList>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetBookRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBookRequest(::grpc::ServerContext* /*context*/, const ::store::GetReq* /*request*/, ::store::BookList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetBookRequest(
      ::grpc::CallbackServerContext* /*context*/, const ::store::GetReq* /*request*/, ::store::BookList* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GetBookRequest<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetBookRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetBookRequest() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetBookRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBookRequest(::grpc::ServerContext* /*context*/, const ::store::GetReq* /*request*/, ::store::BookList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetBookRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetBookRequest() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetBookRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBookRequest(::grpc::ServerContext* /*context*/, const ::store::GetReq* /*request*/, ::store::BookList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetBookRequest(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetBookRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetBookRequest() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetBookRequest(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetBookRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBookRequest(::grpc::ServerContext* /*context*/, const ::store::GetReq* /*request*/, ::store::BookList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetBookRequest(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetBookRequest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetBookRequest() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::store::GetReq, ::store::BookList>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::store::GetReq, ::store::BookList>* streamer) {
                       return this->StreamedGetBookRequest(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetBookRequest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetBookRequest(::grpc::ServerContext* /*context*/, const ::store::GetReq* /*request*/, ::store::BookList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetBookRequest(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::store::GetReq,::store::BookList>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetBookRequest<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetBookRequest<Service > StreamedService;
};

}  // namespace store


#endif  // GRPC_bookstore_5fproto_2eproto__INCLUDED