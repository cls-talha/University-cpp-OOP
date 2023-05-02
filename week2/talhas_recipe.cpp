// coded by talha with ❤ 

#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
using namespace std;

struct Book_Info
{
	string bookname;
	string author;
	int price;
 };

struct Time
{
	int date;
	int month;
	int year;
};

void setter_book(Book_Info& book){
	// pass by reference hence no need to return

	cin.ignore();
	cout << "\nEnter Book name: ";
	getline(cin, book.bookname) ;

	cout << "Enter author name: ";
	getline(cin, book.author) ;

	cout << "Enter price of book: ";
	cin >> book.price ;
	cin.ignore();

	cout<<endl;
}

void setter_Date(Time &time){

	cout<< "\n";
	cout<< "Enter Day(1-31) of issuance: ";
	cin >> time.date;

	cout<< "Enter Month(1-12) of issuance: ";
	cin >> time.month;

	cout<< "Enter Year(1969-2069) of issuance: ";
	cin >> time.year;	
}

void get_Date(Time &time){

	cout<<"****************************************************************"<<endl;
	cout<<"\nThe [Day] of Book issuance is : "  <<time.date <<endl
		<<"The [Month] of Book issuance is : " <<time.month <<endl
		<<"The [Year] of Book issuance is : " <<time.year<<endl; 

}

void get_data(Book_Info& book){

	cout<<"The name of Book is: "  <<book.bookname <<endl
		<<"The name of Author is: " <<book.author <<endl
		<<"The Price of book is: " <<book.price<<endl; 
	cout<<"****************************************************************"<<endl;

}

void add_book_querry(vector<Book_Info> &book_details, Book_Info &details,vector<Time> &time_details,Time &time,int counter){

	for (int i = 0; i < counter; ++i)
	{
		setter_book(details);
		cout<<"Enter Date";
		setter_Date(time);

		book_details.push_back(details);
		time_details.push_back(time);
	}
}

void show_books(vector<Book_Info> &book_details,vector<Time> &time_details,int counter){
	for (int i = 0; i < counter; ++i)
	{
		cout<<endl<<"****\tBook on ["<<i<<"] number\t****\n"<<endl;
		get_data(book_details[i]);
		get_Date(time_details[i]);
	}
}

void erase_entity(vector<Book_Info> &book_arr,vector<Time> &time_arr,int &val,int &counter){
	cout<<"Enter which entity you want to Erase (0/"<<counter<<")"<<endl;
	cin >> val;
	book_arr.erase(book_arr.begin() + val);
	book_arr.erase(book_arr.begin()+ val);
	counter--;
}

bool compare_prices(Book_Info &a, Book_Info &b){
	if (a.price==b.price){
		return 1;
	}
	if(a.price != b.price){
		return a.price > b.price;
	}

	else
		return 0;
}

float avg_Price(vector<Book_Info> Price,int counter){
	float sum{0.0};
	float avg{0.0};

	for (int i = 0; i < counter; ++i){
		sum += Price[i].price;
	}

	avg = sum/counter;
	return avg;
}

// Search Book
int findBook(vector<Book_Info> Price, int price_, int counter) {
    for (int i = 0; i < counter; ++i) {

        if (price_ == Price[i].price) {
            return i;
        }
    }
    return 0;
}

int main(){

	// SYNTAX : vector <data_type> variable name

	vector<Book_Info> book_arr;
	vector<Time> time_arr;

	Time time;
	Book_Info book_details;

	int counter{0},val{0},choice{0},a{0},find_a{0};

	do{
		
		cout << "*************************************************"<<endl;
		cout << "Press <1> to Enter Book information"<<endl;
		cout << "Press <2> to Delete Book information"<<endl;
		cout << "Press <3> to Sort Book information"<<endl;
		cout << "Press <4> to Search Book information"<<endl;
		cout << "Press <5> to Calcuate Average Book Cost"<<endl;
		cout << "Press <6> to Exit the program"<<endl;
		cout << "*************************************************"<<endl;

		
		cin>>choice;

		if(choice==1){

			cout << "[INFO] Enter How many entities you want to enter: ";
			cin >> counter;
			cout<<endl;

			/*	
				args:
					for "add_book_querry()"

					book_arr;  struct of vector
					time_arr; struct of vector
					book_details; idk just just other helper struct to append details in book details
					time arr; 
					counter: how many entities user want to enter   
			*/

			add_book_querry(book_arr,book_details,time_arr,time,counter);

			cout<<endl;
		}

		else if (choice==2){
			/*	
				args:
					for "erase_entity()"

					book_arr;  struct of vector
					time_arr; struct of vector
					val; erase specific entity
					counter; decreent counter w.r.t val to avoid segmentation fault
			*/

			erase_entity(book_arr,time_arr,val,counter);
			show_books(book_arr,time_arr,counter);
			cout<<endl;

		}

		else if(choice==3){
			/*	
				args:
					for "sort()"
					book_arr.begin(); start or arr
					book_arr.end(); end of arr
					compare_prices;
			*/

			sort(book_arr.begin(),book_arr.end(),&compare_prices);
			show_books(book_arr,time_arr,counter);
			cout<<endl;

		}

		else if(choice ==4 ){
			cout << "[INFO] Enter Price of Book which you want to find"<<endl;
			cin >> find_a;

			a = findBook(book_arr,find_a,counter);
			if(a){
				get_data(book_arr[a]);
				get_Date(time_arr[a]);
			}

			else
				cout<<"[INFO] No book found"<<endl;

			cout<<endl;
		}

		else if(choice==5){
			cout << "[INFO] Average Price of Books is: "<<avg_Price(book_arr, counter)<<endl;

			cout<<endl;
		}
	}
	while(choice!=6);

	return 0;
}
