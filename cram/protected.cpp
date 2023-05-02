#include <iostream>

using namespace std;


class A{
protected: 
  int a;

public:
  A(int i ): a(89){

  }
};


class B:public A{

private:
  int y;

public:
  B(int x,int z): y(x),A(z){}

  void alter(){ // cant do this type of thing with private
    A::a = 89999;
  }
  void display(){
    cout << a<<endl;
  }


};

int main(int argc, char const *argv[])
{
  B b(5,6);
  b.alter();
  b.display();
  return 0;
}