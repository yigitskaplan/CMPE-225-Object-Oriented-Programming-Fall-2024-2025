#include <iostream>

using namespace std;

class CompanyEmployees{
	protected:
		string fullName;
		int age;
	public:
		CompanyEmployees(string s, int a):fullName(s), age(a){}
		string getFullName(){return fullName;}
		int getAge(){return age;}
		virtual float calcSalary()=0;
		virtual ~CompanyEmployees(){
			cout<<fullName<<" has left the job at the age of "<<age<<endl;
		}
};

class Managers:public CompanyEmployees{
	private:
		int rank;
	public:
		Managers(string s, int a, int r):CompanyEmployees(s, a), rank(r){}
		float calcSalary(){
			return (5000 + rank*5000/100);
		}
		~Managers(){
			cout<<fullName<<" has left the Management Department at the age of "<<age<<endl;
		}
};

class Employees:public CompanyEmployees{
	private:
		int years;
	public:
		Employees(string s, int a, int y):CompanyEmployees(s, a), years(y){}
		float calcSalary(){
			return (2000 + (years/5) * 1000);
		}
		~Employees(){
			cout<<fullName<<" has left the being employee at the age of "<<age<<endl;
		}
};

void display(CompanyEmployees *c){
	cout<<"Name: "<<c->getFullName()<<", Age"<<c->getAge()<<", Salary"<<c->calcSalary()<<endl;
}

int main(){
	CompanyEmployees *c[]={new Managers("Kobe Bryant",42, 3), new Employees("Stephen Curry", 32, 2)};
	
	for(int i=0;i<2;i++){
		display(c[i]);
	}
	
	for(int i=0;i<2;i++){
		delete(c[i]);
	}
	
	return 0;
}
