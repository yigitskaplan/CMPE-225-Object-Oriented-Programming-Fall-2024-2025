#include <iostream>

using namespace std;

class Employee{
	public:
		virtual void describeRole(){
			cout<<"I am a generic employee."<<endl;
		}
};

class Manager:public Employee{
	public:
		void describeRole(){
			cout<<"I manage teams and projects."<<endl;
		}
};

class Developer:public Employee{
	public:
		void describeRole(){
			cout<<"I write code and develop"<<endl;
		}
};

class Intern:public Employee{
	public:
		void describeRole(){
			cout<<"I assist with various tasks and learn from my team."<<endl;
		}
};

int main(){
	Manager manager;
	Developer developer;
	Intern intern;
	
	Employee *employees[3];
	employees[0]= &manager;
	employees[1]= &developer;
	employees[2]= &intern;
	
	for(int i=0;i<3;i++){
		employees[i]->describeRole();
	}
	
	return 0;
}
