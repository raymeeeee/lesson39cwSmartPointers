#pragma once
#include "SchoolBook.h"
#include "Magazine.h"
#include <set>
#include <typeinfo>

#include <memory>

struct myCompare {
	bool operator() (const shared_ptr<Publication> left, const shared_ptr<Publication> right)const {
		return (left->getYear() < right->getYear());
		
		
		
	}
};

class Library
{
protected:
	set<shared_ptr<Publication>, myCompare> library;
public:
	Library() {
		/*library.insert(shared_ptr<Publication>(new Book("1230", "Harry Poter", "Joan Rouling", 1990, "Ranok")));
		library.insert(shared_ptr<Publication>(new Magazine("4323", "Nature", "BBC", 2023, 1)));
		library.insert(shared_ptr<Publication>(new SchoolBook("1286", "Geometry", "Merzlyak", 2016, "Ranok", 11)));*/
	};

	~Library() {
		cout << "Library destroyed" << endl;
	}

	void addPublication(shared_ptr<Publication> obj) {
		library.insert(obj);
	}

	shared_ptr<Publication> reserve(string ISBN) {
		for (auto item : library) {
			if (item->getISBN() == ISBN) {
				return item;
			}
		}
		return nullptr;
	}

	void show()const {
		for (auto item : library) {
			item->show();
			cout << endl;
		}
	}
};

