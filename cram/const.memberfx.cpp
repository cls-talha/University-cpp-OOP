#include <iostream>  
using namespace std;  
// create a class ABC  
class ABC  
{  
  
public:  
 // use const keyword to declare const data member  
const int A;  
// create class constructor  
ABC ( int y) : A(y)  
{  
cout << " The value of y: " << y << endl;  
}  
};  
int main ()  
{  
ABC obj( 10); // here 'obj' is the object of class ABC  
cout << " The value of constant data member 'A' is: " << obj.A << endl;  
// obj.A = 5; // it shows an error.  
// cout << obj.A << endl;  
return 0;  
}  