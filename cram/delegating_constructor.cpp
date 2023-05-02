#include <iostream>

using namespace std;


class A{
private:
	int var;
	int sar;
	const int st;

public:

	A():A(1,1){
		cout << "By default constuctor run" <<endl;
	}

	A(int a, int b):var(a), sar(b),st(50){
		cout << "Params constuctor run" <<endl;
	}


	void get_var(){
		cout<< var<<endl
			<<sar<<endl;
	}

	int get_const() const {
		sar++;
		return st;
	}

};

int main(){
	const A a{50,80};
	a.get_var();

	cout << a.get_const();
	return 0;
}