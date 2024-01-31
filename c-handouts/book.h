#include <iostream>


class Book{
    private:
    std::string title;
    std::string author;
    std::string publication_date;

    public:
    Book();
    Book(const std::string title, const std::string& author, const std::string& publication_date);
    ~Book();

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getPublication() const;
};