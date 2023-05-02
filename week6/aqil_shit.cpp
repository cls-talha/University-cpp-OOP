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
