#include <grpcpp/grpcpp.h>
#include <bits/stdc++.h>
#include "bookstore_proto.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using store:: GetReq;
using store:: BookStore;
using store:: BookList;

class BookStoreClient {
public:
    BookStoreClient(std::shared_ptr<Channel> channel): stub_(BookStore:: NewStub(channel)) {

    }

    std:: string sendGetRequest()
    {
        GetReq getReq;
        BookList bookList;

        getReq.set_book_id(0);

        ClientContext context;

        Status status = stub_->GetBookRequest(&context, getReq, &bookList);

        if(status.ok()){
            std::cout<< bookList.booklist().size() <<std::endl;
        }
        else{
            std::cout<<status.error_details()<<std::endl;
        }

        return "Hello Tanu";

    }

private:
    std:: unique_ptr<BookStore::Stub> stub_;

};

void RunClient()
{
    std::string target_address("0.0.0.0:50051");

    BookStoreClient client(grpc::CreateChannel(target_address, grpc::InsecureChannelCredentials()));

    auto response = client.sendGetRequest();
    std::cout<<response<<std::endl;
    return;
}


int main()
{
    RunClient();
    return 0;
}