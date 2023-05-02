// #include <iostream>

// class Something
// {
// private:
//     static int s_value;
// public:
//     static int getValue() { return s_value; } // static member function
// };

// float Something::s_value{ 1 }; // initializer

// int main()
// {
//     std::cout << Something::getValue() << '\n';
// }



#include <iostream>

class IDGenerator
{
private:
    static int s_nextID; // Here's the declaration for a static member

public:
     static int getNextID(); // Here's the declaration for a static function
};

// Here's the definition of the static member outside the class.  Note we don't use the static keyword here.
// We'll start generating IDs at 1
int IDGenerator::s_nextID{ 1 };

// Here's the definition of the static function outside of the class.  Note we don't use the static keyword here.
 int IDGenerator::getNextID() { return s_nextID++; }

int main()
{
    for (int count{ 0 }; count < 5; ++count)
        std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';

    return 0;
}