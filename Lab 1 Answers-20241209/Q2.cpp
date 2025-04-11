#include<iostream>

using namespace std;

int boxVolume(int length=1, int width=1, int height=1);

int main()
{
	//no arguments,use default values for all dimensions
	cout<<"The default box volume is: "<<boxVolume()<<endl;
	
	//specify length, default width and height
	cout<<"The volume of a box with length 7,"<<"width 1 and height 1 is: "<<boxVolume(7)<<endl;
	
	//specify length and width, default height
	cout<<"The volume of a box with length 7,"<<"width 5 and height 1 is: "<<boxVolume(7,5)<<endl;
	
	//specify all arguments
	cout<<"The volume of a box with length 7,"<<"width 5 and height 2 is:"<<boxVolume(7,5,2)<<endl;
}

int boxVolume(int length, int width, int height)
{
	return length*width*height;
}
