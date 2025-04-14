#include <iostream>
#include <string.h>

using namespace std;

class GeometricObject{
	protected:
		string color;
		bool filled;
	public:
		GeometricObject(){
			color="white";
			filled=false;
		}
		GeometricObject(string color_,bool filled_){
			color = color_;
			filled = filled_;
		}
		string getColor(){
			return color;
		}
		void setColor(string c){
			color = c;
		}
		bool getfilled(){
			return filled;
		}
		void setFilled(bool b){
			filled = b;
		}
};

class Circle:public GeometricObject{
	private:
		double radius;
		double const PI = 3.14;
	public:
		Circle(){radius = 1;}
		Circle(double r){radius = r;}
		Circle(double r, string c, bool f){
			radius = r;
			color = c;
			filled = f;
		}//Circle(string c, bool f, double r):GeometricObject(c,f),radius(r){}
		double calcArea(){
			return radius * radius * PI;
		}
		double calcPerimeter(){
			return 2 * radius * PI;
		}
};

class Rectangle:public GeometricObject{
	private:
		double width;
		double height;
	public:
		Rectangle(double a, double b){
			width = a;
			height = b;
		}
		Rectangle(double a, double b, string c, bool f){
			width = a;
			height = b;
			color = c;
			filled = f;
		}
		double calcArea(){
			return width * height;
		}
		double calcPerimeter(){
			return ((2 * width) + (2 * height));
		}
};

int main(){
	Circle c;
	cout<<"A circle is created with"<<endl<<"color: "<<c.getColor()<<" and filled: "<<c.getfilled()<<endl<<
	"The area: "<<c.calcArea()<<endl<<"The perimeter: "<<c.getfilled()<<endl;
	
	Rectangle r(2,4);
	cout<<endl<<"A rectangle is created with"<<endl;
	cout<<"color: "<<r.getColor()<<" and filled: "<<r.getfilled()<<endl;
	cout<<"The area: "<<r.calcArea()<<endl;
	cout<<"The perimeter: "<<r.calcPerimeter()<<endl;
	
	return 0;
}
