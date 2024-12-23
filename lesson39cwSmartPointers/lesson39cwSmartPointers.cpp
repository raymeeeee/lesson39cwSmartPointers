#include "Library.h"
#include "Visitor.h"

int main()
{
    /*SchoolBook a;
    a.show();
    cout << endl;

    Book b;
    b.show();
    cout << endl;

    Magazine c;
    c.show();
    cout << endl;*/

    Library lib;
    lib.addPublication(shared_ptr<Publication>(new Book("1230", "Harry Poter", "Joan Rouling", 1990, "Ranok")));
    lib.addPublication(shared_ptr<Publication>(new Magazine("4323", "Nature", "BBC", 2023, 1)));
    lib.addPublication(shared_ptr<Publication>(new SchoolBook("1286", "Geometry", "Merzlyak", 2016, "Ranok", 11)));
    lib.show();

    Visitor a;

    a.borrowPublication(lib.reserve("4323"));
    a.show();
    cout << endl;
}

