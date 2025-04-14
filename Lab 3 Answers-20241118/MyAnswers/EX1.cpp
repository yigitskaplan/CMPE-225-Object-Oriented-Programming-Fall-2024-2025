#include <iostream>

using namespace std;

class Room{
	public:
		double lenght;
		double breadth;
		double height;
		
		Room(double RoomLenght, double Roombreadth, double RoomHeight){
			lenght = RoomLenght;
			breadth = Roombreadth;
			height = RoomHeight;
		}
		
		double area();
		double volume();
		
};

double Room::area(){
	return (lenght * breadth);
}
double Room::volume(){
	return (lenght * breadth * height);
}

int main(){
	double a, b, c;
	
	cout<<"Assign values to data members"<<endl;
	cout<<"Assign lenght as ";
	cin>>a;
	cout<<"Assign breadth as ";
	cin>>b;
	cout<<"Assign height as ";
	cin>>c;
	
	Room R1(a, b, c);
	
	cout<<"Calculate the area and volume of the related room"<<endl;
	cout<<"Area of Room = "<<R1.area()<<endl;
	cout<<"Volume of Room = "<<R1.volume()<<endl;
	
	return 0;
}
