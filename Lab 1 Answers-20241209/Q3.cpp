#include<iostream>

using namespace std;

int area(int l, int b)//area of rectangle
{
	return(l*b);
}
double area(double r)//area of circle
{
	return(3.14*r*r);
}
double area(double b, double h)
{
	return(0.5*b*h);//area of triangle
}

int main()
{
	cout<<"Area of Rectangle: "<<area(4,6)<<endl;
	cout<<"Area of Circle: "<<area(10)<<endl;
	cout<<"Area of Triangle: "<<area(5.0,7.0)<<endl;
	
	return 0;
}
