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


