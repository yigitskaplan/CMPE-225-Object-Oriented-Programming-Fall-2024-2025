#include <iostream>

using namespace std;

class Country
{
	string countryName;
	int cityCount;
	int population;
	
	public:
		Country(string cName)
		{
			countryName=cName;
			cout<<countryName<<" is created."<<endl;
		}
		
		Country(string cName, int cCount)
		{
			countryName=cName;
			cityCount = cCount;
			cout<<countryName<<" is created with "<<cityCount<<" number of cities."<<endl;
		}
		
		Country(string cName, int cCount, int pop)
		{
			countryName=cName;
			cityCount = cCount;
			population = pop;
			cout<<countryName<<" is created with "<<cityCount<<" number of cities and "<<population<<" populations"<<endl;
		}
		
		~Country()
		{
			cout<<countryName<<" is fell down."<<endl;
		}
	
};

int main()
{
     Country Object1("Turkey");
     Country Object2("Germany",79);
     Country Object3("Brazil",17,214000000);
     
     return 0;
}
