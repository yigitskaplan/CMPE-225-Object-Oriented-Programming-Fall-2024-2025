#include<iostream>

using namespace std;

class GeometricObject
{
	protected:
		string color;
		bool filled;
	public:
		GeometricObject()
		{
			color="white";
			filled=false;
		}
		GeometricObject(string color_, bool filled_)
		{
			color = color_;
			filled = filled_;
		}
		string getColor()
		{
			return color;
		}
		bool getFilled()
		{
			return filled;
		}
		void setColor(string c)
		{
			color = c;
		}
		void setFilled(bool f)
		{
			filled = f;
		}
};
class Circle:public GeometricObject
{
	private:
		double radius;
		double const PI=3.14;
	public:
		Circle()
		{
			radius=1;
		}
		Circle(double r)
		{
			radius = r;
		}
		Circle(double r,string c, bool f)
		{
			radius = r;
			color = c;
			filled = f;
		}
		//Circle(string c, bool f, double r):GeometricObject(c,f),radius(r){}
		double calcArea()
		{
			return PI*radius*radius;
		}
		double calcPerimeter()
		{
			return 2*PI*radius;
		}	
};

class Rectangle:public GeometricObject
{
	double h,w;
	public:
		Rectangle()
		{
			h = 1;
			w = 1;
		}
		Rectangle(double h_,double w_)
		{
			h = h_;
			w = w_;
		}
		Rectangle(double h_, double w_ , string c, bool f)
		{
			h = h_;
			w = w_;
			color = c;
			filled = f;
		}
		double calcArea()
		{
			return h*w;
		}
		double calcPerimeter()
		{
			return (h+w)*2;
		}
};
int main()
{
	Circle c1;
	cout<<"A circle is created with"<<endl;
	cout<<"color: "<<c1.getColor()<<" and filled: "<<c1.getFilled()<<endl;
	cout<<"The area: "<<c1.calcArea()<<endl;
	cout<<"The perimeter: "<<c1.calcPerimeter()<<endl;
	cout<<endl;
	Rectangle r1(2,4);
	cout<<"A rectangle is created with"<<endl;
	cout<<"color: "<<r1.getColor()<<" and filled: "<<r1.getFilled()<<endl;
	cout<<"The area: "<<r1.calcArea()<<endl;
	cout<<"The perimeter: "<<r1.calcPerimeter()<<endl;
	return 0;
}
