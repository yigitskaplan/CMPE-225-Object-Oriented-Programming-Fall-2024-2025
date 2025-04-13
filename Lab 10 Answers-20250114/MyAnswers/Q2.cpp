#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string name, surname;
	int id;
	double midterm1, midterm2, final;
	
	ifstream fin("allstudentgrades.txt");
	ofstream fout("studentsFinalScores.txt");
	
	if(!fin.is_open()){
		cout<<"File could not be opened.";
		exit(0);
	}
	
	while(!fin.eof()){
		fin>>name>>surname>>id>>midterm1>>midterm2>>final;
		fout<<name<<" "<<surname<<" "<<id<<" "<<midterm1<<" "<<midterm2<<" "<<final<<" "<<midterm1*0.3+midterm2*0.3+final*0.4<<endl;
	}
	
	fin.close();
	fout.close();
	
	return 0;
}
