// coded by talha with ❤ 

/* Question

	We shall now be trying to create a dynamic array of Student 
	structures as declared below to store the student data. 
	There are 10 students.

	struct Student
	{
	string id;
	string name;
	double grade;
	double average;
	}

	1-Dynamic allocation
	2- static allocaction
	3- single record
*/


#include <iostream>
#include <string>

using namespace std;

struct Student {
    string id;
    string name;
    string grade;
    double average;
};

void get_records(Student* students, int size) {
    for (int i = 0; i < size; ++i) {
        cin.ignore();
    	cout << "*****Record# ["<<i<<"]*****"<<endl;

        cout << "Enter Student ID: ";
        getline(cin, students[i].id);


        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Enter grade: ";
        cin >> students[i].grade;

        cout << "Enter Student average : ";
        cin >> students[i].average;
        cin.ignore();
        cout<<endl;
    }
}

void show_records(Student* students, int size) {
    for (int i = 0; i < size; ++i) {

        cout << "************Student number# [" <<i<< "]*********" << endl
             << "The ID of student is: " << students[i].id << endl
             << "The name of student is: " << students[i].name << endl
             << "The Grade of Student is: " << students[i].grade << endl
             << "The average of student is: " << students[i].average << endl
             << "***********************************************" << endl;
    }
}

void dynamic(){
	
	int size {0};
    cout << "Enter how many students you want to add: ";
    cin >> size;
    Student* record = new Student[size];

    get_records(record, size);
    show_records(record, size);
    delete [] record;
}

void static_(){

	int size {0};
	Student record[100];

    cout << "Enter how many students you want to add: ";
    cin >> size;

    get_records(record, size);
    show_records(record, size);
}

void single_record(Student &students){

    cin.ignore();
	//getting records

    cout << "Enter Student ID: ";
    getline(cin, students.id);

    cout << "Enter Student Name: ";
    getline(cin, students.name);

    cout << "Enter grade: ";
    getline(cin, students.grade);

    cout << "Enter Student average : ";
    cin >> students.average;
    cin.ignore();

    cout<<endl<<endl;

    // printing records
    cout << "************Student number****************" << endl
     << "The ID of student is: " << students.id << endl
     << "The name of student is: " << students.name << endl
     << "The Grade of Student is: " << students.grade << endl
     << "The average of student is: " << students.average << endl
     << "***********************************************" << endl;

}

int main() {
    Student students;

	int choice{0};
	cout<< "<1> For Static Array Memory Allorcation"<<endl
		<< "<2> For Dynamic Array Memory Allorcation"<<endl
		<< "<3> For Single Record"<<endl<<endl;

	cout<< "Enter your choice: ";
	cin >> choice;
	cout<< endl;

	if (choice==1){
		cout << "[INFO] you have Selected [Static Array Memory Allorcation] Option"<<endl;
		static_();
	}
	else if(choice == 2){
		cout << "[INFO] you have Selected [Dynamic Array Memory Allorcation] Option"<<endl;
		dynamic();
	}

	else if(choice ==3){
		cout << "[INFO] you have Selected [Single Record] Option"<<endl ;
		single_record(students);
	}
	else {
		cout<<"[INFO] Invalid Option";
	}


    return 0;
}