#pragma once
#include "Publication.h"
class Magazine :
    public Publication
{
protected:
    int number;
public:
    Magazine() : Publication() {
        number = 0;
    }

    Magazine(string ISBN, string name, string author, int year, int number)
        : Publication(ISBN, name, author, year) {
        this->number = number;
    }

    int getNumber()const { return number; }
    void setNumber(int number) { this->number = number; }

    void show()const override {
        cout << "---Magazine---" << endl;
        cout << "Number: " << number << endl;
        Publication::show();
    }
};

