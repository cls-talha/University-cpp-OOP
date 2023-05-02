// coded by talha with ❤️
#include<iostream>
#include <cmath>

using namespace std;
//task1
class submarine_sandwich {
	public:
		string salad;
		string choice;
		string cheese;
		string fillings;
	    void ask() {
	    	cout<<"\nWhich salad you want to add Cucumber or Tomato? ";
	    	getline(cin,salad);
	    	cout<<"\nDo you want Veg or Non Veg? ";
	    	getline(cin,choice);
	    	cout<<"\nWhich cheese flavour you want Cheddar or Mozarella? ";
	    	getline(cin,cheese);
	    	cout<<"\nDo you want Mayonise as extra fillings Yes or No? ";
	    	getline(cin,fillings);
		}
		void conf() {
			cout<<"\nThe Salad You Choosed is :\t"<<salad;
			cout<<"\nThe Sandwich is :\t"<<choice;
			cout<<"\nThe Cheese you are adding is :\t"<<cheese;
			cout<<"\nExtra filling is :\t"<<fillings;
		}
};
//Lab Task 2
class Anroid_device {
	public:
		long IMEIno = 0;
		string Type;
		string Make;
		long Modelno = 0;
		float Memory;
		string operating_system;
		void ask()
		{
			cout<<"\nEnter the IMEI Number of Mobile: ";
			cin>>IMEIno;
			cout<<"\nEnter The Type of your Mobile: ";
			getline(cin,Type);
			cout<<"\nEnter The Make of your Mobile: ";
			getline(cin,Make);
			cout<<"\nEnter The Model Number of your Mobile: ";
			cin>>Modelno;
			cout<<"\nEnter The Memory of your Mobile: ";
			cin>>Memory;
			cout<<"\nEnter The Operating System of your Mobile: ";
			getline(cin,operating_system);
		}
		void print()
		{
			cout<<"\nThe IMEI Number of your Mobile is : "<<IMEIno;
			cout<<"\nThe Type of your Mobile is : "<<Type;
			cout<<"\nThe Maker of your Mobile is : "<<Make;
			cout<<"\nThe Model Number of your mobile is : "<<Modelno;
			cout<<"\nThe Memory of your mobile is : "<<Memory;
			cout<<"\nThe Operating System for your mobile is : "<<operating_system;
		}
};
// lab Task 3
class Quadrilatral{
    private:
        long int A;
        long int B;
        long int C;
        long int D;
        
        int theta1_;
        int theta2_;
  
    public:
        
        void set_lengths(int a, int b , int c, int d){
            A = a;
            B = b;
            C = c;
            D = d;
        }
        
        void get_lengths(){
            cout<< "The Length of A: " <<A<< endl
                << "The Length of B: " <<B<< endl
                << "The Length of C: " <<C<< endl
                << "The Length of D: " <<D<< endl;
        }
        
        void set_angles(int theta1, int theta2){
            theta1_ = theta1;
            theta2_ = theta2;
        }
        
        void get_angles(){
            cout<< "Angle 1 is: " <<theta1_<< endl
                << "Angle 2 is: " <<theta2_<< endl;
        }
        
        int area_of_Quad(){
            
            // variable declaration
            float s{0}, area{0};
            
            /*
                -----------------------------------------------------
                --> first year 12th chapter triangle forumula
                -----------------------------------------------------
                
                [ ] sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d* cos(theta/2)*cos(theta/2))
                [ ] s = (a+b+c+d)/2 {semi perimeter}
                [ ] theta  = theta1 + theta2
                
            */
            s = (float)(A+B+C+D)/2;
            int theta = theta1_ + theta2_;
            area = float(sqrt((s-A)*(s-B)*(s-C)*(s-D) - A*B*C*D* cos(theta/2)*cos(theta/2)));
            return area;
        }
        
        int perimeter(){
            int per = A+B+C+D;
            return per;
        }
        
        void Show_Results(){
            cout << "******************************************************"<<endl;
            cout << "The Length of A: " <<A<< endl
                 << "The Length of B: " <<B<< endl
                 << "The Length of C: " <<C<< endl
                 << "The Length of D: " <<D<< endl<<endl;
            cout << "******************************************************"<<endl;
            cout << "The Area of Quadrilatral is: " <<area_of_Quad()<<endl;
            cout << "******************************************************"<<endl;
            get_angles();
            cout << "******************************************************"<<endl;
            cout << "The perimeter of Quadrilatral is: "<< perimeter()<<endl;
            cout << "******************************************************"<<endl;

        }
};



int main(){
	
    Quadrilatral Q;
    Q.set_lengths(4,5,3,4);
    Q.set_angles(30,60);
    Q.Show_Results();
    return 0;
}