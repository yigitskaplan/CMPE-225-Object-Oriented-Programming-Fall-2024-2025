//get, put and eof member functions

#include<iostream>

using namespace std;

int main()
{
	int character; 
	
	//prompt user to enter line of the text
	cout<<"Before input, cin.eof() is "<<cin.eof()<<"\nEnter a sentence followed by end-of-file:\n";
		
	//use get to read each character; use put to display it
	while((character=cin.get())!=EOF)
	{
		cout.put(character);
	}	
		
	return 0;
}
