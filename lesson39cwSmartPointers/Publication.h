#pragma once
#include <string>
#include <iostream>
using namespace std;

class Publication
{
protected:
	string ISBN;
	string name;
	string author;
	int year;
public:
	Publication() {
		this->ISBN = "ISBN";
		this->name = "name";
		this->author = "author";
		this->year = 0;
	}

	Publication(string ISBN, string name, string author, int year) {
		this->ISBN = ISBN;
		this->name = name;
		this->author = author;
		this->year = year;
	}

	virtual ~Publication() {}; //для правильного удаления унаследованых обьектов: чтобы вызывался деструктор именно унаследованого обьекта

	string getISBN()const { return ISBN; }
	string getName()const { return name; }
	string getAuthor()const { return author; }
	int getYear()const { return year; }

	void setISBN(string ISBN) { this->ISBN = ISBN; }
	void setName(string name) { this->name = name; }
	void setAuthor(string author) { this->author = author; }
	void setYear(int year) { this->year = year; }

	virtual void show()const {
		cout << "ISBN: " << ISBN << endl;
		cout << "Name: " << name << endl;
		cout << "Author: " << author << endl;
		cout << "Year: " << year << endl;
		cout << endl;
	}
};

