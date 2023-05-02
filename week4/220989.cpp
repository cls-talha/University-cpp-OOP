// //task1

// #include <iostream>

// using namespace std;

// class Student {
//    private:
//       string firstName;
//       string lastName;
//       int classYear;
//       string major;
//    public:
//       Student(string fName, string lName, int year, string maj) {
//          firstName = fName;
//          lastName = lName;
//          classYear = year;
//          major = maj;
//       }
// };

// // Example students
// Student s1("ALI", "Ahmed", 2023, "Computer Science");
// Student s2("Akbar", "Jabir", 2022, "Biology");

// class Planet {
//    private:
//       string name;
//       double distanceFromSun;
//       double gravityRelativeToEarth;
//    public:
//       Planet(string n, double d, double g) {
//          name = n;
//          distanceFromSun = d;
//          gravityRelativeToEarth = g;
//       }
// };

// // Examples
// Planet earth("Earth", 149.6, 1.0);
// Planet mars("Mars", 227.9, 0.38);

// class Customer {
//    private:
//       string firstName;
//       string lastName;
//    public:
//       Customer(string fName, string lName) {
//          firstName = fName;
//          lastName = lName;
//       }
// };

// class Account {
//    private:
//       Customer customer;
//       double balance;
//    public:
//       Account(Customer c, double b) {
//          customer = c;
//          balance = b;
//       }
// };

// // Example accounts held by the same customer
// Customer c1("Ahmed", "Ali");
// Account a1(c1, 1000.0);
// Account a2(c1, 500.0);

// class SeatAssignment {
//    private:
//       int row;
//       char letter;
//    public:
//       SeatAssignment(int r, char l) {
//          row = r;
//          letter = l;
//       }
// };

// class Ticket {
//    private:
//       string departureCity;
//       string arrivalCity;
//       string flightNumber;
//       SeatAssignment seat;
//    public:
//       Ticket(string dep, string arr, string fn, SeatAssignment s) {
//          departureCity = dep;
//          arrivalCity = arr;
//          flightNumber = fn;
//          seat = s;
//       }
// };

// // Examples
// SeatAssignment s1(12, 'F');
// Ticket t1("Karachi", "Lahore", "UA123", s1);
// SeatAssignment s2(5, 'A');
// Ticket t2("Faisalabad", "karachi", "AA456", s2);

// int main() {
//    cout << "Program executed successfully." << endl;
//    return 0;
// }


// //task 2
// #include <iostream>
// using namespace std;

// class Factorial {
//   private:
//     int n;

//   public:
//     void getNumber() {
//       cout << "Enter a positive integer: ";
//       cin >> n;
//     }

//     int calculateFactorial() {
//       int fact = 1;
//       for (int i = 1; i <= n; i++) {
//         fact *= i;
//       }
//       return fact;
//     }
// };

// int main() {
//   Factorial f;
//   f.getNumber();
//   cout << "Factorial of " << f.getNumber() << " is: " << f.calculateFactorial() << endl;
//   return 0;
// }



// //task3
// #include <iostream>
// using namespace std;

// class LargestNumber {
//   private:
//     int num1, num2, num3;

//   public:
//     void getNumbers() {
//       cout << "Enter three integers: ";
//       cin >> num1 >> num2 >> num3;
//     }

//     int findLargestNumber() {
//       int largest = num1;
//       if (num2 > largest) {
//         largest = num2;
//       }
//       if (num3 > largest) {
//         largest = num3;
//       }
//       return largest;
//     }
// };

// int main() {
//   LargestNumber ln;
//   ln.getNumbers();
//   cout << "Largest number is: " << ln.findLargestNumber() << endl;
//   return 0;
// }

// //task4
// #include <iostream>
// using namespace std;

// class ReverseNumber {
//    private:
//       int num, reversedNum = 0, remainder;

//    public:
//       ReverseNumber(int n) {
//          num = n;
//       }

//       void reverse() {
//          while (num != 0) {
//             remainder = num % 10;
//             reversedNum = reversedNum * 10 + remainder;
//             num /= 10;
//          }
//       }

//       void display() {
//          cout << "Original Number: " << num << endl;
//          cout << "Reversed Number: " << reversedNum << endl;
//       }
// };

// int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;

//    ReverseNumber rn(num);
//    rn.reverse();
//    rn.display();

//    return 0;
// }


//task5
#include <iostream>
using namespace std;

class Time {
   private:
      int hours, minutes, seconds;

   public:
      Time(int h = 0, int m = 0, int s = 0) {
         hours = h;
         minutes = m;
         seconds = s;
      }

      void display() {
         cout << hours << ":" << minutes << ":" << seconds << endl;
      }

      void addTime(Time &t1, Time &t2) {
         seconds = t1.seconds + t2.seconds;
         minutes = t1.minutes + t2.minutes + (seconds / 60);
         hours = t1.hours + t2.hours + (minutes / 60);
         minutes %= 60;
         seconds %= 60;
      }
};

int main() {
   Time t1(2, 30, 45), t2(3, 20, 15), t3;

   t3.addTime(t1, t2);

   cout << "Time 1: ";
   t1.display();
   cout << "Time 2: ";
   t2.display();
   cout << "Total Time: ";
   t3.display();

   return 0;
}