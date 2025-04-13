#include<iostream>

using namespace std;

int main()
{
	const int SIZE = 80;
	char buffer[SIZE]; //create an array of 80 characters
	
	cout<<"Enter a sentence:\n";
	cin.getline(buffer,SIZE);
	
	//display buffer contents
	cout<<"\nThe sentence entered is:\n"<<buffer<<endl;
}
