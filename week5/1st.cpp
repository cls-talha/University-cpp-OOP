#include <iostream>
using namespace std;

class GraduateCourse{

protected:
	string courseID;
	string courseName;
	int creditHours;
	int courseFee;
public:
	GraduateCourse(string CiD, string Cname, int Chour, int Cfee){
		courseID = CiD; 
	 	courseName= Cname;  
	 	creditHours= Chour;
	 	courseFee= Cfee;
	}

	

	void set_courseID(string S){
		courseID = S ;
	}

	void set_courseName(string Sn){
		courseName = Sn;
	}

	void set_creditHours(int h){
		creditHours = h;
	}


	void set_courseName(int Cfee){
		courseFee = Cfee;
	}


	string get_CourseID(){
		return courseID;
	}

	string get_courseName(){
		return courseName;
	}

	int get_CreditHour(){
		return creditHours;
	}

	int get_courseFee(){
		return courseFee;
	}

	~GraduateCourse(){}
};

class ResearchCourse:public GraduateCourse{
private:
	int experimentFee;

public:
	ResearchCourse(int expFee,string CiD, string Cname, int Chour, int Cfee):GraduateCourse(CiD, Cname,Chour,Cfee){
		experimentFee = expFee;
	}

	void set_setExperimentFee(int efee){
		experimentFee = efee;
	}

	void Display(){
		cout<< "Experiment Fee: "<< experimentFee << endl
			<< "courseID: " << courseID << endl
			<< "courseName: " << courseFee <<endl
			<< "Credit Hour" << creditHours <<endl 
			<< "Course Fee: " << courseFee<<endl;
	}

	int get_totalFee(){
		return courseFee+ experimentFee;
	}

};

int main(int argc, char const *argv[])
{
	ResearchCourse R(100,"CS2133", "OOP", 3, 10000);
	R.Display();
	return 0;
}