#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	string name, temp;
	int age;

	inFile.open("file.txt");
	
	getline(inFile, name); 
	inFile >> age; 
	
	getline(inFile, name, ' '); // use ' ' as separator, default is '\n'(newline). Now name is "Roger".
	getline(inFile, temp, ' '); // Now temp is "Federer"
	name.append(1,' ');
	name += temp;
	inFile >> age; 
	
	cout << name << endl;
	cout << age << endl;  
	
	inFile.close();  
	
	return 0;	
}
