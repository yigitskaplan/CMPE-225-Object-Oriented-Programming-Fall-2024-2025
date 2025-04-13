#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){
	ifstream inFile;
	
	string name, temp;
	int age;
	
	inFile.open("file.txt");
	
	getline(inFile,name);
	inFile>>age;
	
	getline(inFile,name,' ');
	getline(inFile,temp, ' ');
	name.append(1, ' ');
	name+=temp;
	inFile>>age;
	
	cout<<name<<endl;
	cout<<age<<endl;
	
	inFile.close();
	
	return 0;
}
