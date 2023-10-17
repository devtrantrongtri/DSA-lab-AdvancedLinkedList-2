// Library.cpp
#include "Library.h"
#include <algorithm>
#include <iostream>

Book::Book(const std::string& title, const std::vector<std::string>& authors, const std::string& publisher, int year)
    : title(title), authors(authors), publisher(publisher), year(year), next(nullptr) {}

Library::Library() : head(nullptr) {}

void Library::addBook(Book* newBook) {
    if (head == nullptr) {
        head = newBook;
    } else {
        Book* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newBook;
    }
}

int Library::countBooksByAuthor(const std::string& author) {
    int count = 0;
    Book* temp = head;
    while (temp != nullptr) {
        if (std::find(temp->authors.begin(), temp->authors.end(), author) != temp->authors.end()) {
            count++;
        }
        temp = temp->next;
    }
    return count;
}

void Library::listBooksByPublisherAndYear(const std::string& publisher, int year) {
    Book* temp = head;
    while (temp != nullptr) {
        if (temp->publisher == publisher && temp->year == year) {
            std::cout << "Title: " << temp->title << std::endl;
        }
        temp = temp->next;
    }
}
