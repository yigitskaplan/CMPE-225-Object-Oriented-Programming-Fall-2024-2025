#include <iostream>

using namespace std;

class Vehicle{
	protected:
		string brand;
		string model;
		int year;
	public:
		Vehicle(string b, string m, int y):brand(b),model(m),year(y){}
		void displayInfo(){
			cout<<"Brand: "<<brand<<endl;
			cout<<"Model: "<<model<<endl;
			cout<<"Year: "<<year<<endl;
		}
		~Vehicle(){}
};
class Bicycle:public Vehicle{
	private:
		bool hasGears;
	public:
		Bicycle(string b, string m, int y, bool gears):Vehicle(b, m, y),hasGears(gears){}
		void displayInfo(){
			Vehicle::displayInfo();
			cout<<"Has Gears: "<<(hasGears ? "Yes" : "No")<<endl;
		}
};
class Scooter:public Vehicle{
	private:
		int motorPower;
	public:
		Scooter(string b, string m, int y, int mp):Vehicle(b,m,y),motorPower(mp){}
		void displayInfo(){
			Vehicle::displayInfo();
			cout<<"Motor Power: "<<motorPower<<" watts"<<endl;
		}
};

int main(){
	Bicycle bike("Trek", "Domane", 2023, true);
	cout<<"Bicycle Information: "<<endl;
	bike.displayInfo();
	cout<<endl;
	
	Scooter scooter("Xiomi", "M365", 2022, 500);
	cout<<"Scooter Information: "<<endl;
	scooter.displayInfo();
	
	return 0;
}
