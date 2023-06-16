#include <grpcpp/grpcpp.h>
#include <bits/stdc++.h>
#include "cmake/build/bookstore_proto.grpc.pb.h"
#include <grpcpp/ext/proto_server_reflection_plugin.h>


using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using store:: BookStore;
using store:: GetReq;
using store:: BookList;




class RequestHandlerImplementation final : public BookStore :: Service {

    struct BookInfoData {
        int bookId;
        std::string bookTitle;
        std:: string author;
    };

    std::map<int,BookInfoData> BookStore;
    int nextBookId = 1;

    Status GetBookRequest(ServerContext* context, const GetReq* req, BookList* res) override {

        if(req->get_all()){
            for(auto itr:BookStore){
                auto tmpBookInfo = itr.second;
                auto tmpBook = res->add_book_list();
                tmpBook->set_book_id(tmpBookInfo.bookId);
                tmpBook->set_book_title(tmpBookInfo.bookTitle);
                tmpBook->set_author(tmpBookInfo.author);
            }

        }
        else{
            int bookId = req->book_id();
            if(BookStore.count(bookId)==0){
                return Status::CANCELLED;
            }
            auto tmpBook = res->add_book_list();
            auto tmpBookInfo = BookStore[bookId];
            tmpBook->set_book_id(tmpBookInfo.bookId);
            tmpBook->set_book_title(tmpBookInfo.bookTitle);
            tmpBook->set_author(tmpBookInfo.author);
        }

        return Status::OK;
    }

    Status CreateBookRequest(::grpc::ServerContext* context, const ::store::BookCreateInfo* req, ::store::BookInfo* res) override {

        BookInfoData newBook;
        newBook.bookId = nextBookId++;
        newBook.bookTitle = req->book_title();
        newBook.author = req->author();

        BookStore[newBook.bookId] = newBook;

        res->set_book_id(newBook.bookId);
        res->set_book_title(newBook.bookTitle);
        res->set_author(newBook.author);

        std::cout<<"Created Successfully in SERVER\n"<<newBook.author<<std::endl;
        return Status::OK;
    }

    Status EditBookRequest(::grpc::ServerContext* context, const ::store::BookInfo* req, ::store::BookInfo* res) override {

        int bookId = req->book_id();
        if(!BookStore.count(bookId)){
            return Status::CANCELLED;
        }

        BookInfoData tmpBook = BookStore[bookId];
        tmpBook.bookTitle = req->book_title();
        tmpBook.author = req->author();
        BookStore[bookId]=tmpBook;

        res->set_book_id(tmpBook.bookId);
        res->set_book_title(tmpBook.bookTitle);
        res->set_author(tmpBook.author);

        return Status::OK;

    }

    Status DeleteBookRequest(::grpc::ServerContext* context, const ::store::DeleteReq* req, ::store::StatusResponse* res) override {

        int bookId = req->book_id();

        if(!BookStore.count(bookId)){
            return Status::CANCELLED;
        }

        BookStore.erase(bookId);
        res->set_status("Book Deleted");

        return Status::OK;

    }


};

void runServer()
{

    std::string server_address("0.0.0.0:50051");
    RequestHandlerImplementation service;

    ServerBuilder builder;

    grpc::EnableDefaultHealthCheckService(true);
    grpc::reflection::InitProtoReflectionServerBuilderPlugin();
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