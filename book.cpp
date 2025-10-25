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

// Q qlq emprunte un livre, on passe son nom dans la fonction borrwer
void Book::checkOut(const string& borrower){
    isAvailable = false; // q qlq emprente livre , il nest plus dispo
    borrowerName = borrower; 
}
// l'invers de checkout, on rend dispo le livre sans personne
void Book::returnBook(){
    isAvailable = true;
    borrowerName = "";
}

string Book::toString() const {
    string statut;

    // etat du livre
    if (isAvailable)
        statut = "Disponible";
    else
        statut= "Emprunté";

    // si livre est emprunté, on ajoute le nom
    if (!isAvailable && !borrowerName.empty()) {
        statut += " (emprunté par: " + borrowerName + ")";
    }

    return statut;
}
string Book::toFileFormat() const {
    string description = title + "|" + author + "|" + isbn + "|";

    if (isAvailable)
        description += "| 1 ";
    else 
        description += "| 0 ";

        //s’il y en a un emprenteur
    description += borrowerName;

    return description;
}



