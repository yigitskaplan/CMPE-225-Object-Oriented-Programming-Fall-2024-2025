#include <iostream>

using namespace std;

class Country{
	string name;
	int city;
	int population;
	public:
		Country(string a){
			name = a;
			cout<<name<<" is created."<<endl;
		}
		Country(string a, int b){
			name = a;
			city = b;
			cout<<name<<" is created with "<<city<<" number of cities."<<endl;
		}
		Country(string a, int b, int c){
			name = a;
			city = b;
			population = c;
			cout<<name<<" is created with "<<city<<" number of cities and "<<population<<" populations"<<endl;
		}
		~Country(){
			cout<<name<<" is fell down."<<endl;
		}
};

int main()
{
     Country Object1("Turkey");
     Country Object2("Germany",79);
     Country Object3("Brazil",17,214000000);
     
     return 0;
}

