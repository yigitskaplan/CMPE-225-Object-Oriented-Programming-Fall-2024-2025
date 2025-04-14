#include <iostream>
#include <sstream>

using namespace std;

class Math{
	public:
		int num1;
		int num2;
		int result;
		void add(){
			result= num1 + num2;
		}
		void substract(){
			result= num1 - num2;
		}
		void multiply(){
			result= num1 * num2;
		}
		friend istream& operator<<(istream&,const Math&);
		friend ostream& operator>>(ostream&, Math&);
};
istream& operator>>(istream &is,const Math &a){
	cout<<"Enter two integers: ";
	is>>a.num1>>a.num2;
	return is;
}
ostream& operator<<(ostream &os, Math &a){
	as<<a.result;
	return as;
}

int main(){
	Math obj;
	
	cin>>obj;
	
	obj.add();
	cout<<"Addition: "<<obj.result<<endl;
	obj.substract();
	cout<<"Substraction: "<<obj.result<<endl;
	obj.multiply();
	cout<<"multiplication: "<<obj.result<<endl;
	
	return 0;
}
