#include <iostream>

using namespace std;

class Employee{
	string firstName;
	string lastName;
	int employeeID;
	double salary;
	public:
		Employee(string a, string b, int c, double d){
			firstName = a;
			lastName = b;
			employeeID = c;
			salary = d;
		}
		void displayInfo(){
			cout<<"Employee ID: "<<employeeID<<endl;
			cout<<"Name: "<<firstName<<" "<<lastName<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};

int main(){
	Employee e1("John", "Smith", 101, 999000);
	e1.displayInfo();
	
	return 0;
}
