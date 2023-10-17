// main.cpp
#include <iostream>
#include "Library.h"

int main() {
    Library library;
    
    // Add books here (you can also take input from the user)
    Book* book1 = new Book("Sample Book 1", {"Author1", "Author2"}, "Sample Publisher", 2021);
    library.addBook(book1);

    // Count books by an author
    std::string author;
    std::cout << "Enter the author to search for: ";
    std::cin >> author;
    int count = library.countBooksByAuthor(author);
    std::cout << "Number of books by " << author << ": " << count << std::endl;

    // List books by a publisher and year
    std::string publisher;
    int year;
    std::cout << "Enter the publisher: ";
    std::cin >> publisher;
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Books published by " << publisher << " in the year " << year << ":\n";
    library.listBooksByPublisherAndYear(publisher, year);

    return 0;
}
