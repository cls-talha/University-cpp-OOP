#include <iostream>
using namespace std;

class Base {
protected: //wont work for private
    void display_base(){
        cout << "This is Base class \n";
    }

};

class Derived : private Base {
public:
    void display_derive(){
        display_base(); //we can do this for private
        cout << "This is Base class \n";
    }
};

int main() {
    Derived d ;
    d.display_derive();
}
