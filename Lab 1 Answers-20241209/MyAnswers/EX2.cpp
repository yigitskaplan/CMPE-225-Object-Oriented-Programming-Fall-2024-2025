#include <iostream>

using namespace std;

int boxVolume(int lenght = 1, int width = 1, int height = 1);

main(){
	cout<<"The default box volume is: "<<boxVolume()<<endl;
	cout<<"The volume of a box with lenght"<<7<<",width "<<1<<"and height"<<1<<"is: "<<boxVolume(7)<<endl;
	cout<<"The volume of a box with lenght"<<7<<",width "<<5<<"and height"<<1<<"is: "<<boxVolume(7, 5)<<endl;
	cout<<"The volume of a box with lenght"<<7<<",width "<<5<<"and height"<<1<<"is: "<<boxVolume(7, 5, 2)<<endl;
}

int boxVolume(int lenght, int width, int height){
	return lenght*width*height;
}
