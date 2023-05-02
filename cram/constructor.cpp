#include <iostream>

using namespace std;


class A{
private:
	int var;

public:

	A(int a):var(a){
		//var = a;
	}


	int get_var(){
		return var;
	}

};

int main(){
	A a{4};
	cout << a.get_var();
	return 0;
}