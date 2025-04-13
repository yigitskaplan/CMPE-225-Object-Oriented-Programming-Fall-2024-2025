#include <iostream>

using namespace std;

class Student{
	protected:
		int studentId;
	public:
		Student(int SI):studentId(SI){}
		int getStudentId(){return studentId;}	
};

class Teacher{
	protected:
		int registrationNo;
	public:
		Teacher(int RN):registrationNo(RN){}
		int getRegistrationNo(){return registrationNo;}
};

class Assistant:public Student, public Teacher{
	public:
		Assistant(int SI, int RN):Student(SI), Teacher(RN){}
};

int main(){
	int studentId=9753;
	int registrationNo=987;
	
	Assistant a1(studentId, registrationNo);
	
	cout<<"Student ID: "<<a1.getStudentId()<<endl;
	cout<<"Registration Number: "<<a1.getRegistrationNo()<<endl;
	
	return 0;
}


