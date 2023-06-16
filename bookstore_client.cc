#include <grpcpp/grpcpp.h>
#include <bits/stdc++.h>
#include "cmake/build/bookstore_proto.grpc.pb.h"

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
        int id;
        std::cout<< "Enter Book id(give -1 to get all): \n";
        std::cin>>id;

        if(id==-1)
            getReq.set_get_all(true);
        else
            getReq.set_book_id(id);


        ClientContext context;

        Status status = stub_->GetBookRequest(&context, getReq, &bookList);

        if(status.ok()){
            std::cout<< " Found Items  " <<bookList.book_list().size()<<std::endl;
            for(int i =0;i<bookList.book_list_size();i++){
                std::string bookInfo = bookList.book_list(i).SerializeAsString();
                std::cout<<bookInfo<<std::endl;
                //std::cout<<"Book id: " << bookList.book_list(i).book_id() << "   Book Title: " << bookList.book_list(i).book_title() << "   Book Author: " <<bookList.book_list(i).author() << std::endl;
            }
        }
        else{
            std::cout<<"CANCELLED"<<std::endl;
        }

        return "GOT";

    }

    std::string sendCreateReq(){


        store::BookCreateInfo newBook;
        //createReq.set_allocated_book_create_info(&newBook);

        std::string bookTitle,author;
        std::cout<< "Enter Book Title: \n";
        std::cin>>bookTitle;
        std::cout<< "Enter Book Author Name: \n";
        std::cin>>author;
        newBook.set_book_title(bookTitle);
        newBook.set_author(author);

        store::BookInfo createdBook;

        ClientContext context;

        Status status = stub_->CreateBookRequest(&context, newBook, &createdBook);

        if(status.ok()){

            return "Created Successfully";
        }
        else{
            return "Creation Failed";
        }


    }

    std::string sendEditReq(){


        store::BookInfo editBook;

        using namespace std;
        string bookTitle,author;
        int bookId;

        cout<<"Enter Book Id:\n";
        cin>>bookId;
        cout<< "Enter Book Title: \n";
        cin>>bookTitle;
        cout<< "Enter Book Author Name: \n";
        cin>>author;
        editBook.set_book_id(bookId);
        editBook.set_book_title(bookTitle);
        editBook.set_author(author);

        store::BookInfo editedBook;

        ClientContext context;

        Status status = stub_->EditBookRequest(&context, editBook, &editedBook);

        if(status.ok()){
            return "Edited Successfully";
        }
        else{
            return "Edition Failed";
        }

    }

    std::string deleteReq() {
        store::DeleteReq deleteReq;
        using namespace std;
        int bookId;

        cout<<"Enter Book Id:\n";
        cin>>bookId;

        deleteReq.set_book_id(bookId);

        store:: StatusResponse stat;

        ClientContext context;

        Status status = stub_->DeleteBookRequest(&context, deleteReq, &stat);

        if(status.ok()){
            std::cout<< stat.status()<<std::endl;
            return "Deleted Successfully";

        }
        else{
            return "Deletion Failed";
        }
    }

private:
    std:: unique_ptr<BookStore::Stub> stub_;

};

void RunClient()
{
    std::string target_address("0.0.0.0:50051");

    BookStoreClient client(grpc::CreateChannel(target_address, grpc::InsecureChannelCredentials()));
    while (1) {
        std::cout<<" Press 1 for Get Req\n Press 2 for Create Req\n Press 3 for Edit Req\n Press 4 for Delete Req\n Press 5 for Exit\n";
        int i;
        std::cin>>i;
        if(i==5)break;
        std::string resp;

        if(i==1)
            resp = client.sendGetRequest();
        else if(i==2) {
            resp = client.sendCreateReq();

        }
        else if(i==3)
            resp = client.sendEditReq();
        else
            resp = client.deleteReq();

        std::cout<<resp<<std::endl;
    }

    return;
}


int main()
{
    RunClient();
    return 0;
}