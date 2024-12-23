#pragma once
#include "Publication.h"
#include <vector>

#include <memory>

class Visitor
{
protected:
	string name;
	vector<shared_ptr<Publication>> borrow;
public:
	Visitor() {
		name = "name";
	}

	Visitor(string name) {
		this->name = name;
	}

	void borrowPublication(shared_ptr<Publication> obj) {
		borrow.push_back(obj);
	}

	void show()const {
		cout << "Name: " << name << endl;
		for (auto i : borrow) {
			i->show();

		}
	}
};

