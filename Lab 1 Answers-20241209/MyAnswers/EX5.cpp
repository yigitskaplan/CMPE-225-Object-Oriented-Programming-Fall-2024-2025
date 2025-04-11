#include <iostream>

using namespace std;

int squareByValue(int a){
	return a*a;
}
void squareByReference(int& a){
	a*=a;
}

main(){
	int x = 2;
	int z = 4;
	cout<<"x = "<<x<<" before squareByValue"<<endl<<endl;
	cout<<"Value returned by squareByValue: "<<squareByValue(x)<<endl;
	cout<<"x = "<<x<<" after squareByValue"<<endl<<endl;
	cout<<"z = "<<z<<" before squareByReference"<<endl;
	squareByReference(z);
	cout<<"z = "<<z<<" before squareByReference"<<endl;

	return 0;
}
