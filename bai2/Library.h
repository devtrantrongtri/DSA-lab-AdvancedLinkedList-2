// Library.h
#pragma once
#include <string>
#include <vector>

class Book {
public:
    std::string title;
    std::vector<std::string> authors;
    std::string publisher;
    int year;
    Book* next;

    Book(const std::string& title, const std::vector<std::string>& authors, const std::string& publisher, int year);
};

class Library {
public:
    Book* head;
    Library();
    void addBook(Book* newBook);
    int countBooksByAuthor(const std::string& author);
    void listBooksByPublisherAndYear(const std::string& publisher, int year);
};
