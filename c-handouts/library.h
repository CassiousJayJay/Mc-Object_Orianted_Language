#include <vector>
#include <iostream>

class Libbrary{
    private:
    std::vector<Book> book;
    public:
    Libbrary();
    void addBook(const Book& book);
    void deleteBook(std::string& title);
    Book* searchByTitle(const std::string& title);
    Book* searchByAuthor(const std::string& author);

    Libbrary()


}