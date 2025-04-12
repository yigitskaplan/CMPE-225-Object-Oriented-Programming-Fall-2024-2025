#include <iostream>

using namespace std;

class Student
{
	int studentId;
	public:
		Student(int _studentId):studentId(_studentId){}
		int getstudentId() { return studentId;}
};

class Teacher
{
	int registrationNo;
	public:
		Teacher(int _registrationNo):registrationNo(_registrationNo){}
		int getregistrationNo() {return registrationNo;}
};

class Assistant: public Student, public Teacher //derived from both classes student and teacher
{
	public:
		Assistant(int studentId, int registrationNo):Student(studentId),Teacher(registrationNo) {}
};

int main(){
	int studentId = 9753;
	int registrationNo = 987;
	Assistant assistant(studentId,registrationNo);
	cout<<"   \n Student id : "<<assistant.getstudentId()<<endl;
	cout<<"   \n Registration number : "<<assistant.getregistrationNo()<<endl;
	
	return 0;
}
