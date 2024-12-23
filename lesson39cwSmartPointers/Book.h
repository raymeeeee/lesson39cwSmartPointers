#pragma once
#include "Publication.h"
class Book :
    public Publication
{
protected:
    string manufacturer;
public:
    Book() : Publication() {
        manufacturer = "manufacturer";
    }

    Book(string ISBN, string name, string author, int year, string manufacturer) : Publication(ISBN, name, author, year) {
        this->manufacturer = manufacturer;
    }

    string getManufacturer()const { return manufacturer; }
    void setManufacturer(string manufacturer) { this->manufacturer = manufacturer; }

    void show()const override {
        cout << "\b" << endl;
        cout << "---Book---" << endl;
        Publication::show();
        cout << "Manufacturer: " << manufacturer << endl;
        cout << endl;
    }
};

