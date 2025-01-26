#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define the book class
class Book
{
    public:
        std::string title;
        std::string author;

        // Constructor
        Book(const std::string& title, const std::string& author) : title(title), author(author) {};


        // the const keyword after the function call ensures that no variables/methods are changable with the function
        void display() const
        {
            cout << "book title: " << title << " author: " << author << endl;
        }

        void set_title(const std::string& new_title)
        {
            title = new_title;
        }
};

// Define the library class
class Library
{
    private:
        std::vector <Book> Books;

    public:
        // Add a book to the library
        void add_book(Book book)
        {
            Books.push_back(book);
        }

        void display_books()
        {
            for (auto book:Books)
            {
                cout << "Title: " << book.title << ", Author: " << book.author << endl;
            }
        }
};

int main()
{
    Library library;
    library.add_book(Book("this is my book", "author-1"));
    library.add_book(Book("Another book", "author-2"));

    cout << "Display all books:" << endl;
    library.display_books();

    // Create book
    cout << "Test with new book" << endl;
    Book book_1("New Book", "Author-3");
    book_1.display();
    cout << book_1.author << endl;
}