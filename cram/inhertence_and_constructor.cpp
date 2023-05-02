#include <iostream>

using namespace std;


class A{
private:
	int var;
	int sar;
	const int st;

public:

	A():A(1,1){
		cout << "A By default constuctor run" <<endl;
	}

	A(int a, int b):var(a), sar(b),st(50){
		cout << "A Params constuctor run" <<endl;
	}


	void get_var(){
		cout<< var<<endl
			<<sar<<endl;
	}

	int get_const() const {
		return st;
	}

};

class B:public A{
private:
	int var_;
	int sar_;
	const int st_;

public:

	B():B(1,1){
		cout << "B By default constuctor run" <<endl;
	}

	B(int a, int b):var_(a), sar_(b),st_(50){
		cout << "B Params constuctor run" <<endl;
	}


	void get_var_(){
		cout<< var_<<endl
			<<sar_<<endl;
	}

	int get_const_() const {
		return st_;
	}

};


int main(){
	B a{89,78};
	cout <<a.get_const();
	return 0;
}