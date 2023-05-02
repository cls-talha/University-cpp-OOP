#include <string>
#include <iostream>

using namespace std;
class Something
{
public:
    int data;
    Something(int y = 10): data{ y } {}
    
    int get() const{
        //return ++data; //not allowed
        // ++data; error , const is read-only function
        return data;
    }




};

int main()
{
    // Something something;
    // something.getValue() = "Hi"; // calls non-const getValue();

    Something something2(9);
    cout << something2.get(); // calls const getValue();

    return 0;
}