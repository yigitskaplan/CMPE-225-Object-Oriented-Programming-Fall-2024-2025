#include<iostream>

using namespace std;

class Person
{
	private:
		string name;
	public:
		
		Person(string n)
		{
			name=n;
		}
		
		Person(const Person &p)
		{
			cout<<"Copy Cons"<<endl;
			name=p.name+"copy";
		}
		
		string getName()
		{
			return name;
		}
	
};

void display(Person p)
{
	cout<<p.getName()<<endl;
}

main()
{
	Person p("CMPE225");

	display(p);
	
}
