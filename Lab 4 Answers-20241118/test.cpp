#include <iostream>
#include <sstream>

using namespace std;

class Shape{
    public:

        virtual double calculateArea()=0;
};

class Rectangle:public Shape{
    private:
        int width;
        int height;
        double areaR;
    public:
        Rectangle(int a = 1, int b = 1):width(a), height(b){}

        void calculateArea(){
            areaR =(width * height);
        }

        friend Rectangle& operator + (const Rectangle& R1, const Rectangle& R2){
            Rectangle temp;
            temp.width = R1.width + R2.width;
            temp.height = R1.height + R2.height;
            return temp;
        }

        friend ostream& operator << (ostream &out, const Rectangle& R1){
            out<<R1.areaR;
            return out;
        }

        friend istream% operator >> (istream &in ,const Rectangle& R1){
            in>>R1.width>>R1.height;
            return in;
        }
};

class Circle:public Shape{
    private:
        int radius;
        const double PI = 3.14;
    public:
        Circle(int a = 1):radius(a){}

        double calculateArea(){
            return (radius * radius * PI);
        }

    friend Circle& operator + (const Circle& C1, const Circle& C2){
        Circle temp;
        temp.radius = C1.radius + C2.radius;
        return temp;
    }
};

int main(){
    Rectangle Re1(5);
    Rectangle Re2(5, 7);
    Rectangle Re3();

    Circle();
    Circle(7);

    Re1.calculateArea();
    Re2.calculateArea();
    Re3.calculateArea();

    cout<<"1"<<Re1<<endl;
    cout<<"2"<<Re2<<endl;
    cout<<"3"<<Re3<<endl;

    cin>>Re3;

    Re3.calculateArea();

    cout<<"3"<<Re3<<endl;

    Re2 = Re2 + Re1;

    Re2.calculateArea();

    cout<<"sum"<<Re2<<endl;
     
    return 0;
}

