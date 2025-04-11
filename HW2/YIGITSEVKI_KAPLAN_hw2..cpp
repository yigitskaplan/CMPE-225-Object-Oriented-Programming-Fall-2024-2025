#include <iostream>

using namespace std;

const double PI = 3.141592653589793;

class Shape{
    public:
        virtual string getName(){
            return "Shape class";
        }
        virtual void calcArea(){
            cout<<"Area of the shape not calculated in this function."<<endl;
        }
        virtual void calcPerimeter(){
            cout<<"Perimeter of the shape cannot be calculated in this function."<<endl;
        }

        virtual ~Shape() {}
};

class Circle:public Shape{
    private:
        string name;
        double radius;
    public:
        Circle(): name("Circle"), radius(0){}

        string getName(){return name;}
        void setRadius(double r){radius = r;}

        void calcArea(){
            cout<<"Area of the circle is "<< PI * radius * radius <<endl;
        }

        void calcPerimeter(){
            cout<<"Perimeter of the circle is "<< 2 * PI * radius <<endl;
        }
};

class Rectangle:public Shape{
    private:
        string name;
        double side1;
        double side2;
    public:
        Rectangle(): name("Rectangle"), side1(0), side2(0){}

        string getName(){return name;}
        void setSides(double s1, double s2){
            side1 = s1;
            side2 = s2;
        }

        void calcArea(){
            cout<<"Area of the rectangle is "<< side1 * side2 <<endl;
        }

        void calcPerimeter(){
            cout<<"Perimeter of the rectangle is "<< (2 * side1) + (2 * side2) <<endl;
        }
};

class InvArgument{};

void chooseCalc(Shape& shape){
    char operation;
    cout<<"Would you like to calculate area or perimeter for "<<shape.getName()<<"? (a for area, p for perimeter): ";
    cin>>operation;

    try{
        if(operation == 'a'){
            shape.calcArea();
        }
        else if(operation == 'p'){
            shape.calcPerimeter();
        }
        else{
            throw operation;
        }
    }
    catch(char InvOperation){
        cout<<InvOperation<<" choice is invalid. Please enter 'a' for area and 'p' for perimeter."<<endl;
    }
}

int main(){
    Circle circle;
    Rectangle rectangle;

    circle.setRadius(5.0);
    rectangle.setSides(4.0, 5.0);

    Shape *shape1 = &circle;
    Shape *shape2 = &rectangle;

    chooseCalc(*shape1);
    chooseCalc(*shape2);

    return 0;
}