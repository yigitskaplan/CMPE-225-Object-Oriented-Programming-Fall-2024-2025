#include <iostream>

using namespace std;

class StudentBasicInfo{
	protected:
		char name[30];
		int age;
		char gender;
	public:
		void getBasicInfo();
		void putBasicInfo();
};
void StudentBasicInfo::getBasicInfo(){
	cout<<"Enter student's basic information: "<<endl;
	cout<<"Enter the name of the student: ";
	cin>>name;
	cout<<"Enter the age of the student: ";
	cin>>age;
	cout<<"Enter the gender of the student: ";
	cin>>gender;
}
void StudentBasicInfo::putBasicInfo(){
	cout<<"Name: "<<name<<",Age: "<<age<<",Gender: "<<gender<<endl;
}

class StudentResultInfo:public StudentBasicInfo{
	int totalM;
	double perc;
	char grade;
	public:
		void getResultInfo();
		void putResultInfo();
};
void StudentResultInfo::getResultInfo(){
	cout<<"Enter student's result information: "<<endl;
	cout<<"Enter total marks: ";
	cin>>totalM;
	perc=(float)((totalM*2)/10);
	cout<<"Grade: ";
	cin>>grade;
}
void StudentResultInfo::putResultInfo(){
	cout<<"Total Marks: "<<totalM<<",Percentage: "<<perc<<",Grade: "<<grade<<endl;
}

int main(){
	//Create object of derived class
	StudentResultInfo s1;
	//Read the basic and result information
	s1.getBasicInfo();
	s1.getResultInfo();
	//Print student basic and result information
	s1.putBasicInfo();
	s1.putResultInfo();
	
	return 0;
	
}
