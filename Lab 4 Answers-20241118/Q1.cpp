#include <iostream>

using namespace std;

class Point 
{

    int x,y;

	public:
    
    	Point(int x=0, int y=0):x(x),y(y){}

	    //Overloaded + operator
	    Point operator+(const Point& coord)
		{
	        return Point(x+coord.x, y+coord.y);
	    }

    	//Coordinates
    	void display() const 
		{
        	cout<<"("<<x<<", "<<y<<")"<<endl;
    	}
};

int main() 
{
    Point p1(7,6);
    Point p2(5,4);
    
    Point p3=p1+p2;

    cout<<"p1: ";
    p1.display();
    
    cout<<"p2: ";
    p2.display();
    
    cout<<"p3 (p1 + p2): ";
    p3.display();

    return 0;
}
