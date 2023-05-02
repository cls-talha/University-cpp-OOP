#include <iostream>

class Something
{
private:
    static int s_value; // declares the static member variable

public:
    int get(){
        return s_value;
    }
};

int Something::s_value=4; // defines the static member variable (we'll discuss this section below)

int main()
{
    Something a;
    std::cout << a.get()<< '\n';
    return 0;

}