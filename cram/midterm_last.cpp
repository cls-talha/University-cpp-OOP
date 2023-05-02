#include <iostream>

using namespace std;

class A{
public:
	static int var;
	int val;

public:
	void incremnet(){
		var++;
	}

	static int get_static(){
		return var;
	}
	A(int x):val(x){
		cout  << "Constructor class A"<<endl;
		incremnet();
	};
	~A(){
		cout << "Destructor class A" <<endl;
	};


	// int get_val() {
	// 	return var;
	// }

	// int get_val_() {
	// 	return var;
	//}

	int get_val() const{
		val =8;
		return val+1;
	}
};

class B:public A{

public:
	B(int x):A(x){
		cout  << "Constructor class B"<<endl;
		incremnet();
	};

	~B(){
		cout  << "Destructor class B"<<endl;
	}
	
};

class C:public A{

public:
	C(int x):A(x){
		cout  << "Constructor class C"<<endl;
		incremnet();
	}

	~C(){

		cout  << "Destructor class C"<<endl;
	}
	
};

int A::var;

int main(int argc, char const *argv[])
{

	C c{0};

	B b(4);
	cout << b.get_val()<<endl;

	// cout << A::get_static()<<endl;
	// A::var=100;

	// cout << A::get_static()<<endl;
	// cout << A::var<<endl;


	return 0;
}