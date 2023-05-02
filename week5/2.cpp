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

int main()
{
    SpacePoint S(5, 6, 8);
    S.display();
    cout << "Space Distance: " << S.spaceDistance(SpacePoint(1, 2, 3)) << endl;
    

    return 0;
}
