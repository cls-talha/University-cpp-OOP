// coded by talha with ❤️

#include <iostream>

using namespace std;

// base
class Employee{
protected:
	string name;
	int empID;

public:
	Employee(string s, int e){
		name = s;
		empID = e;
	}
};

//derived 1
class HourlyEmployee: public Employee{
protected:
	int hourlyIncome;

public:
	HourlyEmployee(int hourRate, string n, int e):Employee(n,e){ 
		hourlyIncome = hourRate;
	}

	int calculate_the_hourly_income(){
		return hourlyIncome*150;
	}

};


//derived 2
class PermanentEmployee: public Employee{
protected:
	int hourlyIncome;

public:
	PermanentEmployee(int hr, string n, int e):Employee(n,e){ 
		hourlyIncome = hr;
	}

	int calculate_the_income(){
		return 240*150;
	}
};

int main()
{
	// initialization of instances
	PermanentEmployee p1(45,"sdfds",54);
	HourlyEmployee p2(2, "Talha", 23123);
	cout<< "Thwe income og hourly Employee: " 
		<<p2.calculate_the_hourly_income() 
		<< endl
		<< "The Rate of Permanemt Employee: " 
		<< p1.calculate_the_income() 
		<< endl;

	return 0;
}