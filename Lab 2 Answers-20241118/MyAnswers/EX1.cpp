#include <iostream>

using namespace std;

class PlayerInformation{
	public:
		string name, surname;
		int age;
		PlayerInformation(string a, string b, int c){
			name = a;
			surname = b;
			age = c;
		}
};

int main(){
	PlayerInformation p1("Kobe", "Bryant", 44);
	cout<<"Name:"<<p1.name<<", Surname:"<<p1.surname<<", Age:"<<p1.age<<endl;
	
	return 0;
}
