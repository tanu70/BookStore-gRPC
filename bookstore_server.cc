#include <grpcpp/grpcpp.h>
#include <bits/stdc++.h>
#include "bookstore_proto.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using store:: BookStore;
using store:: GetReq;
using store:: BookList;

class RequestHandlerImplementation final : public BookStore :: Service {
    Status GetBookRequest(ServerContext* context, const GetReq* req, BookList* res) override {
        int ss = req->book_id();


        std::cout<<ss<<std::endl;

        return Status::OK;
    }
};

void runServer()
{
    std::string server_address("0.0.0.0:50051");
    RequestHandlerImplementation service;

    ServerBuilder builder;

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout<< "Server Started Running"<<std::endl;

    server->Wait();

}

int main()
{

    runServer();

    return 0;
}