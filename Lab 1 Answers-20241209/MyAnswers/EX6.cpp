#include <iostream>

using namespace std;

int val=7;

bool checkIt(float val){
	cout<<"parameter: "<<val<<", global: "<<::val<<endl;
	if(val==::val)
		return true;
	return false;
}

int main(){
	float v;
	cout<<"Enter a value: ";
	cin>>v;
	cout<<checkIt(v);
	
	return 0;
}
