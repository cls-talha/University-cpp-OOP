#include <iostream>
#include <string>

using namespace std;

class Rectangle{
public:
	int X;
	int Y;

	Rectangle(int x = 0, int y=0): X(x), Y(y){
	}

	int get_X(){	
		return X; 
	}

	int get_Y(){
		return Y;
	}
};


class Area:public Rectangle{
	public:
		int Val;

		Area(int val,int x, int y):Val(val){
			
			X = x;
			Y=y;
		}
		
		int calc_Area(){
			cout <<Val<<endl;
			return X*Y;
		}
		
};


int main(){

	Area b(1,5,5);
	cout << b.calc_Area();

	return 0;
}



