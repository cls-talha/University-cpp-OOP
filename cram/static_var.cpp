#include <iostream>

int incrementAndPrint()
{
    static int s_value{ 1 }; // static duration via static keyword.  This initializer is only executed once.
    // s_value=5;
    ++s_value;
    //std::cout << s_value << '\n';
    // s_value=0;
    return s_value;
} // s_value is not destroyed here, but becomes inaccessible because it goes out of scope

int main()
{
    std::cout << incrementAndPrint();
    std::cout << std::endl << incrementAndPrint();
    std::cout << std::endl << incrementAndPrint();

    return 0;
}