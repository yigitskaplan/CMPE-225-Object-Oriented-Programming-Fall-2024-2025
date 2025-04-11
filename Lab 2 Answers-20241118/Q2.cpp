#include <iostream>

using namespace std;

class Employee
{
    public:
        string firstName;
        string lastName;
        int employeeID;
        double salary;

        Employee(string fName, string lName, int id, double sal)
        {
            firstName = fName;
            lastName = lName;
            employeeID = id;
            salary = sal;
        }

        void displayInfo()
        {
            cout<<"Employee ID: "<<employeeID<<
			endl<<"Name: "<<firstName<<" "<<lastName<<
            endl<<"Salary: $"<<salary<<endl;
        }
};

int main()
{
    Employee emp1("John", "Smith", 101, 999000);
    emp1.displayInfo();

    return 0;
}

