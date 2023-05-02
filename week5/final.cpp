#include <iostream>
using namespace std;

class PlanePoint {
protected:
    int X;
    int Y;
public:
    PlanePoint(int x, int y) {
        X = x;
        Y = y;
    }
    void setX(int x) {
        X = x;
    }
    void setY(int y) {
        Y = y;
    }
    int getX() {
        return X;
    }
    int getY() {
        return Y;
    }
    void display() {
        cout << "X: " << X << endl;
        cout << "Y: " << Y << endl;
    }
    int planeDistance(PlanePoint p) {
        return (X - p.X) * (X - p.X) + (Y - p.Y) * (Y - p.Y);
    }
};

class SpacePoint : public PlanePoint {
private:
    int Z;
public:
    SpacePoint(int x=0, int y=0, int z=0) : PlanePoint(x, y) {
        Z = z;
    }
    void setZ(int z) {
        Z = z;
    }
    int getZ() {
        return Z;
    }
    void display() {
        cout << "X: " << X << endl;
        cout << "Y: " << Y << endl;
        cout << "Z: " << Z << endl;
    }
    int spaceDistance(SpacePoint p) {
        return (X - p.X) * (X - p.X) + (Y - p.Y) * (Y - p.Y) + (Z - p.Z) * (Z - p.Z);
    }
};


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

    SpacePoint S(5, 6, 8);
    S.display();
    cout << "Space Distance: " << S.spaceDistance(SpacePoint(1, 2, 3)) << endl;
    

    return 0;
}