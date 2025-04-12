#include <iostream>

using namespace std;

class Employee 
{
	public:
    	virtual void describeRole()
		{
        	cout<<"I am a generic employee."<<endl;
    	}
    	virtual ~Employee(){}
};

class Manager:public Employee 
{
	public:
    	void describeRole()
		{
        	cout<<"I manage teams and projects."<<endl;
    	}
};

class Developer:public Employee 
{
	public:
    	void describeRole()
		{
        	cout<<"I write code and develop software."<<endl;
    	}
};

class Intern:public Employee 
{
	public:
    	void describeRole()
		{
        	cout<<"I assist with various tasks and learn from my team."<<endl;
    	}
};

int main() 
{
    Manager manager;
    Developer developer;
    Intern intern;

    //Creating pointers to base class Employee and assigning derived class objects
    Employee* employees[3];
    employees[0]=&manager;   //Manager object
    employees[1]=&developer; //Developer object
    employees[2]=&intern;    //Intern object

    // Calling describeRole() for each employee using polymorphism
    for (int i=0; i<3; i++) 
	{
        employees[i]->describeRole();
    }

    return 0;
}
