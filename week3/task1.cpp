#include<iostream>

using namespace std;

class Submarine_Sandwich{
private:
	string sauces;
	string mortadella;
	bool salad;
	string filling;
	
public:
	// sauce
	void set_sauces(string s){
		sauces = s;
	}
	void get_sauce(){
		cout << "[INFO] You have added: "<<sauces<<" in your sandwich"<<endl;
	}

	// mortadella
	void set_mort(string m){
		mortadella = m;
	}
	void get_mort(){
		cout << "[INFO] You have added: ["<<to_Upper(mortadella)<<"] in your sandwich"<<endl;
	}


	// salad
	void set_salad(bool s){
		salad = s;
	}
	void get_salad(){
		if(salad)
			cout << "[INFO] You have added salad in your sandwich"<<endl;
		else
			cout << "[INFO] You did not add any salad in your sandwich"<<endl;
	}

	// fillings
	void set_filling(string f){
		filling = f;
	}
	void get_filling(){
		cout << "[INFO] You have added: ["<<filling<<"] in your sandwich"<<endl;
	}

	// convert to uppercase
	string to_Upper(string name){
		for(int i = 0; i < name.size(); i++) {
	    	name.at(i) = toupper(name.at(i));
		}

		return name;
	}
};


int main()
{
	Submarine_Sandwich S;

	S.set_filling("chicken");
	S.set_mort("2");
	S.set_salad(0);

	S.get_filling();
	S.get_mort();
	S.get_salad();

	return 0;
}