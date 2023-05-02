// coded by talha ❤️

#include <iostream>
using namespace std;

class Person{
protected:
	string name;
	int year_of_birth;

public:
	Person(string n, int bth){
		name = n;
		year_of_birth = bth;
	}
};

class Employee{
protected:
	int employeeID;
	int joiningYear;
	string jobTitle;
	int courseID;
	string courseTitle;

public:
	Employee(int eid, int jyear, string jtitle, int cid, string ctitle){
		employeeID = eid;
		joiningYear = jyear;
		jobTitle = jtitle;
		courseID = cid;
		courseTitle = ctitle;
	}
};

class Administration: public Employee{
public:
	Administration(int e_id, int j_year,string j_title,int c_id = 0,string c_title=""):Employee(e_id,j_year,j_title,c_id,c_title){
	}

	void setJobTitle(string jt){
		jobTitle = jt;
	}
	string getJobTitle(void){
		return jobTitle;
	}
};

class Student: public Person{
protected:
	int studentID;
	int enrolledSemester;

public:
	Student(int stID, int esem,string n, int bth):public(n,bth){
		studentID = stID;
		enrolledSemester = esem;
	}

	void display(){
		cout<< "Student ID: "<<studentID<< endl
			<< "Enroll Semester: " << enrolledSemester<< endl
			<< "Name: " << name<<endl
			<< "Year Birth" << year_of_birth << endl;
	}
};

class Academic:public Employee{
public:
	//employeeID, joiningYear, and jobTitle, null
	Academic(int cid, string ctitle,int eid=0, int jyear=0, string jtitle=""):Employee(int eid, int jyear, string jtitle, int cid, string ctitle){
	}

};

