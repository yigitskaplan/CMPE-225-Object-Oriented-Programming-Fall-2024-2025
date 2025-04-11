#include <iostream>

using namespace std;

class Room 
{

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() 
	{
        return length * breadth;
    }

    double calculateVolume() 
	{
        return length * breadth * height;
    }
};

int main() 
{

    // create object of Room class
    Room room1;

	cout<<"Assign values to data members"<<endl;
	cout<<"Assign length as 42.5, breadth 33.3, and height 22.2"<<endl;
    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 33.3;
    room1.height = 22.2;
    
	cout<<"Calculate the area and volume of the related room"<<endl;
    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
