#include <iostream>

using namespace std;

class Shape 
{
	public:
	    
	    virtual double calculateArea()=0;
};

class Rectangle:public Shape 
{
	private:
	    double width;
	    double height;
	
	public:
	    
	    Rectangle(double w, double h):width(w), height(h){}
	
	    double calculateArea()
		{
	        return width*height;
	    }
};

class Circle:public Shape 
{
	private:
	    double radius;
	
	public:
	
	    Circle(double r):radius(r){}
	
	    double calculateArea()
		{
	        return 3.14*radius*radius;
	    }
};

int main() 
{
    Rectangle rectangle(5.0, 4.0);

    Circle circle(3.0);

    cout<<"Area of Rectangle: "<<rectangle.calculateArea()<<endl;

    cout<< "Area of Circle: "<<circle.calculateArea()<<endl;

    return 0;
}
