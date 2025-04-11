#include <iostream>

using namespace std;

int area(int lenght, int width){
	return lenght*width;
}
double area(double r){
	return ((3.14)*r*r);
}
double area(double r, double h){
	return ((r*h)/2);
}

main(){
	cout<<"Area of Rectangle: "<<area(4, 6)<<endl;
	cout<<"Area of Circle: "<<area(10)<<endl;
	cout<<"Area of Triangle: "<<area(5.0, 7.0)<<endl;
	
	return 0;
}

