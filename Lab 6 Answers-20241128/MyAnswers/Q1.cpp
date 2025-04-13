#include <iostream>
#include <string>

using namespace std;

class Person{
	protected:
		int age;
		string name;
	public:
		Person(string s,int a):name(s), age(a){}
		void displayDetails(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};


class Student:public Person{
	private:
		int rollNumber;
		string grade;
		float marks;
	public:
		Student(string n, int a, int roll, string grd, float m):Person(n,a),rollNumber(roll), grade(grd), marks(m){}
		void displayDetails(){
			Person::displayDetails();
			cout<<"Roll Number"<<rollNumber<<endl;
			cout<<"Grade: "<<grade<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
};

class Teacher:public Person{
	private:
		int employeeID;
		string subject;
		float salary;
	public:
		Teacher(string n, int a, int id, string subj, float sal):Person(n, a), employeeID(id), subject(subj), salary(sal){}
		void displayDetails(){
			Person::displayDetails();
			cout<<"Employee ID: "<<employeeID<<endl;
			cout<<"Subject: "<<subject<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};

int main(){
	Student S("Alice", 18, 101, "A", 95.5);
	Teacher T("Mr. Smith", 45, 2001, "Mathematics", 50000.0);
	
	cout<<"Student Details: "<<endl;
	S.displayDetails();
	cout<<endl;
	cout<<"Teacher Details: "<<endl;
	T.displayDetails();
	
	return 0;
}
