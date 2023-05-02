// #include <iostream>

// class A {
// public:
//     A() {
//         std::cout << "A constructor called." << std::endl;
//     }

//     ~A() {
//         std::cout << "A destructor called." << std::endl;
//     }
// };

// class B {
// public:
//     B() {
//         std::cout << "B constructor called." << std::endl;
//     }

//     ~B() {
//         std::cout << "B destructor called." << std::endl;
//     }
// };

// int main() {
//     A a;
//     B b;
//     {
//         A c;
//     }
//     return 0;
// }


#include <iostream>

class A {
public:
    A() {
        std::cout << "A constructor called." << std::endl;
    }

    ~A() {
        std::cout << "A destructor called." << std::endl;
    }
};

class B : public A {
public:
    B() {
        std::cout << "B constructor called." << std::endl;
    }

    ~B() {
        std::cout << "B destructor called." << std::endl;
    }
};

int main() {
    A* ptr = new B();
    delete ptr;
    return 0;
}
