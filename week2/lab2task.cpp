#include<iostream>
#include <string>
using namespace std;

struct book_struct{

	string book_name;
	string author;
	int price;
};

struct data_struct{

	int day;
	int month;
	int year; 
};

void getBook_details(book_struct & books){
    cout << "Enter Book name: ";
    getline(cin, books.book_name);

    cout << "Enter Book's author name: ";
    getline(cin, books.author);

    cout << "Enter Book cost: ";
    cin >> books.price;
    cout<<endl;

}

void getDate(data_struct &date){

    cout << "Enter issue date: ";
    cin >> date.day;

    cout << "Enter issue month: ";
    cin >> date.month;

    cout << "Enter issue year: ";
    cin >> date.year;
    cout << endl;
}

void print_vals(book_struct datails_b1, data_struct date_b1){
	// first struct
	cout<< "The name of book is: "<< datails_b1.book_name<<endl
		<< "The name of author is: "<< datails_b1.author<<endl
		<< "The Price of book is: "<< datails_b1.price<<endl;

	//second struct
	cout<<endl;
	cout<< "The date of book issuance: "<< date_b1.day<<endl
		<< "The month of book issuance: "<< date_b1.month<<endl
		<< "The year of book issuance: "<< date_b1.year<<endl;
}

int main()
{	
	book_struct datails_b1[10];
	data_struct date_b1[10];
	int choice;
	int vals{0};

	// getBook_details(datails_b1);
	// getDate(date_b1);

	// print_vals(datails_b1,date_b1);

	do{
		cout << "Press (1) to Enter Book information"<<endl;
		cout << "Press (2) to Delete Book information"<<endl;
		cout << "Press (3) to Sort Book information"<<endl;
		cout << "Press (4) to Search Book information"<<endl;
		cout << "Press (5) to Calcuate Average Book Cost"<<endl;
		cout << "Press (6) to Exit the program"<<endl;
		
		cin>>choice;

		if(choice==1){
			cout << "Enter total entities you want to enter: ";
			cin >> vals;

			for (int i = 0; i < vals; ++i)
			{
				getBook_details(datails_b1[i]);

			}
		}

	}
	while(choice!=6);

	return 0;
}