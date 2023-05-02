
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



#include <iostream>
using namespace std;

class Person{
	protected:
		string YoB;
		string Name;
	public:
		Person(string n, string y)
		{
			 Name=n;
			 YoB=y;
			}	
			
};

class Employee{
	protected:
		string employeeID;
		string JobTitle;
		string courseTitle;
		int joiningYear;
		int courseID;
	public:
		Employee(string eID, string jT, string cT, int jY, int cID)
		{
			employeeID=eID;
			JobTitle=jT;
			courseTitle=cT;
			joiningYear=jY;
			courseID=cID;
			}	
			
};

class Administration: public Employee {
	public:
		Administration(string eID, string jT, string cT, int jY, int cID): Employee(eID, jT, "NULL", jY, 0)
		{
		}
		void setJobTitle(string jT)
		{
			JobTitle=jT;
		}
		string getJobTitle()
		{
			return JobTitle;
		}
};

class Student:public Person{
	protected:
		int StudentID;
		string enrolledSemester;
	public:
		Student(string name, string yb, int sID, string eS): Person(name, yb)
		{
			StudentID=sID;
			enrolledSemester=eS;
		}
		
		void Display()
		{
			cout<<"\nStudent Name > "<<Name;
			cout<<"\nStudent ID > "<<StudentID;
			cout<<"\nYear of Birth > "<<YoB;
			cout<<"\nEnrolled Semester > "<<enrolledSemester;
		}
		
};

class Academic: public Employee {
	public:
		Academic(string eID, string jT, string cT, int jY, int cID): Employee("NULL", "NULL", cT, 0, cID )
		{
		}
		void setCourseTitle(string cT)
		{
			courseTitle=cT;
		}
		void setCourseID(int cID)
		{
			courseID=cID;
		}
};

class DeanHOD: public Employee {
	public:
		DeanHOD(string eID, string jT, string cT, int , int cID ): Employee(eID, jT, cT, 0, cID )
		{
		}
};

int main(int argc, char const *argv[])
{
	Person p1("Talha Qt", "2002");
	Administration A1("220989", "Sweeper", "NULL", 2019, 0);
	A1.setJobTitle("Banker");
	cout<<"\nJob Title > "<<A1.getJobTitle();
	Student s1("talha", "2002", 220958, "2nd");
	s1.Display();
	Academic ac1("NULL", "NULL", "OOP", 0, 141538);
	ac1.setCourseID(6969);
	ac1.setCourseTitle("Object Oriented"); 

	return 0;
}
