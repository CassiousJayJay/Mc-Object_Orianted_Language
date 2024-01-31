#include "library.h"
#include "book.h"
void library::addBook(const Book& addBook){
    Book.push_back(book);
    std::cout << "Book add to the library: " << book.getTitle() << std::endl;
}

void library:: deleteBook(const std""string& title){
    auto it = std::find_if(Book.begin(), Book.end(), [&title](const Book& book){
        return Book.getTitle() == title;

    });
    if(it != Book.end()){
        Book.erase(it);
        std::cout << "Book deleted from the library: " << title << std::endl;
    }else{
        std::cout << "Book not found in the library: " << title << dts::endl;
    }
}