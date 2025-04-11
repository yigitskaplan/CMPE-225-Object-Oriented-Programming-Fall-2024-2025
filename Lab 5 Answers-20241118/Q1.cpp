// C++ program to read and print students information
// using two classes and simple inheritance

#include <iostream>
using namespace std;

// Base class
class StudentBasicInfo 
{
	private:
	    char name[30];
	    int age;
	    char gender;

	public:
	    void getBasicInfo();
	    void putBasicInfo();
};

// function definitions
void StudentBasicInfo::getBasicInfo()
{
    cout<<"Enter student's basic information:" << endl;
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"Enter the age of the student: ";
    cin>>age;
    cout<<"Enter the gender of the student: ";
    cin>>gender;
}

void StudentBasicInfo::putBasicInfo()
{
    cout<<"Name: "<<name<<",Age: "<<age<<",Gender: "<<gender<<endl;
}

// Derived class
class StudentResultInfo:public StudentBasicInfo 
{
	private:
	    int totalM;
	    float perc;
	    char grade;

	public:
	    void getResultInfo();
	    void putResultInfo();
};

// Function definitions
void StudentResultInfo::getResultInfo()
{
    cout<<"Enter student's result information:" <<endl;
    cout<<"Enter total marks: ";
    cin>>totalM;
    perc=(float)((totalM * 100) / 500);
    cout<<"Grade: ";
    cin>>grade;
}

void StudentResultInfo::putResultInfo()
{
    cout<<"Total Marks: "<<totalM<<",Percentage: "<<perc<<",Grade: "<<grade<<endl;
}

int main()
{
    // Create object of derived class
    StudentResultInfo student;

    // Read student basic and result information
    student.getBasicInfo();
    student.getResultInfo();

    //print student basic and result information
    student.putBasicInfo();
    student.putResultInfo();

    return 0;
}
