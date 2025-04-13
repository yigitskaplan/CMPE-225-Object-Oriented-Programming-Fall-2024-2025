#include<iostream>

using namespace std;

class Negative
{
	public:
		Negative(){}
		Negative(string txt):message(txt){}
		
		string getMessage()
		{
			return message;
		}
	
	private:
		string message; 
};

class ZeroDivision{};

int main()
{
	int load, truck; //both are countable assets
	double loadPerTruck;
	
	try
	{
		/*Load*/
		cout<<"Enter number of packages to load: ";
		cin>>load;
		if(load<0)
		{
			throw Negative("number of packages to load");
		}
		
		/*Truck*/
		cout<<"Enter number of trucks available: ";
		cin>>truck;
		if(truck<0)
		{
			throw Negative("number of trucks to carry the load");
		}
		
		if(truck!=0)
		{
			loadPerTruck=load/static_cast<double>(truck);
		}
		else
		{
			throw ZeroDivision();
			cout<<"You have"<<loadPerTruck<<" packages per truck to load"<<endl; 
		}
	}
	catch(Negative e)
	{
		cerr<<"Encountered negative number; mistake in "<<e.getMessage()<<endl;
	}
	catch(ZeroDivision)
	{
		cerr<<"You have no trucks available!"<<endl;
	}
	
	cout<<"Leaving the program"<<endl;
}
