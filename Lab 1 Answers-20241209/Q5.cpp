#include<iostream>

using namespace std;

int squareByValue(int); //func. prototype (value pass)
void squareByReference(int&); //func. pro. (reference pass)

int main()
{
	int x=2;
	int z=4;
	
	cout<<"x="<<x<<" before squareByValue\n"<<endl;
	cout<<"Value returned by squareByValue: "<<squareByValue(x)<<endl;
	cout<<"x="<<x<<" after squareByValue\n"<<endl;
	
	cout<<"z="<<z<<" before squareByReference"<<endl;
	squareByReference(z);
	cout<<"z="<<z<<" after squareByReference"<<endl;
}

//squareByValue multiplies number by itself, stores the result
//in number and returns the new value of number
int squareByValue(int number)
{
	return number *= number; //caller's argument not modified
}

//squareByReference multiplies numberRef by itself and stores the result
//in the variable to which numberRef refers in function main
void squareByReference(int& numberRef)
{
	numberRef *= numberRef; //caller's argument modified
}
