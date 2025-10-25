#include "book.h"
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;


// Constructeurs

//par defaut
Book::Book() {
    title = "";
    author = "";
    isbn = "";
    isAvailable = true;
    borrowerName = "";
}

//avec parametre
Book::Book(const string& title, const string& author, const string& isbn) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->isAvailable = true;
    this->borrowerName = "";
}

// Getters
string Book::getTitle() const {
    return title;
}
string Book::getAuthor() const {
    return author;
}
string Book::getISBN() const {
     return isbn;
     }
bool Book::getAvailability() const { 
    return isAvailable; 
}
string Book::getBorrowerName() const { 
    return borrowerName; 
}

// Setters
void Book::setTitle(const string& _title) { 
    title = _title; 
}
void Book::setAuthor(const string& _author) { 
    author = _author; 
}
void Book::setISBN(const string& _isbn) { 
    isbn = _isbn; 
}
void Book::setAvailability(bool _available) { 
    isAvailable = _available; 
}
void Book::setBorrowerName(const string& _name) { 
    borrowerName = _name; 
}


