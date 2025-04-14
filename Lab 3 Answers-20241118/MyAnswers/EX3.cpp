#include <iostream>

using namespace std;

class Person{
	string name;
	public:
		Person(string a){name = a;}
		
		Person(const Person &p){
			cout<<"Copy Cons"<<endl;
			name = p.name + "copy";
		}
		string getName(){
			return name;
		}
};
void display(Person p)
{
	cout<<p.getName()<<endl;
}
int main(){
		Person p1("CMPE225");
		display(p1);
		
		return 0;
}
