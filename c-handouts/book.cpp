#include "book.h"

Book::Book():title(""), author(""), publication_date(""){}
Book::Book(const std::string& title, const std::string& author, const std::string& publication_date) 
: title(title), author(author), publication_date(publication_date){}

Book::~Book(){
    std::cout << "Book object destroyed: " << title << std::endl;
}

