#include <iostream>

using namespace std;
main(){
	
	cout<<"Enter your age: ";
	int age;
	cin>>age;
	
	if(age <= 18){
		age = 50;
	}else if(18<=age && age<=25){
		age = 70;
	}else{
		age = 100;
	}
	
	cout<<"Enter the number of months you will stay: ";
	int month;
	cin>>month;
	
	cout<<"The total cost of gym membership is: "<<month * age<<"$"<<endl;
}
