#pragma once
#include "SchoolBook.h"
#include "Magazine.h"
#include <set>

class Library
{
protected:
	set<Publication*> library;
public:
	Library() {
		library.insert(new Book("1230", "Harry Poter", "Joan Rouling", 2008, "Ranok"));
		library.insert(new Magazine("4323", "Nature", "BBC", 2023, 1));
		library.insert(new SchoolBook("1286", "Geometry", "Merzlyak", 2008, "Ranok", 11));
	};

	~Library() {
		cout << "Library destroyed" << endl;
	}

	void show()const {
		for (auto item : library) {
			item->show();
		}
	}
};

