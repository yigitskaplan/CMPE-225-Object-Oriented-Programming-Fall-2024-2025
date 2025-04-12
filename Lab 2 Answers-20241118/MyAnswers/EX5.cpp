#include <iostream>

using namespace std;

class Square{
	int side;
	public:
		Square(){
			side = 1;
			cout<<"default constructor"<<endl;
		}
		Square(int a){
			side = a;
			cout<<"overloaded constructor"<<endl;
		}
		int perimeter();
		int area();
		~Square(){
			cout<<"destructor"<<endl;
		}
};
int Square::area()
{
	return side*side;
}
int Square::perimeter()
{
	return 4*side;
}

int main(){
	Square s1, s2(3);
	cout<<"Perimeter of the first object: "<<s1.perimeter()<<endl;
	cout<<"Area of the first object: "<<s1.area()<<endl;
	cout<<"Perimeter of the first object: "<<s2.perimeter()<<endl;
	cout<<"Area of the first object: "<<s2.area()<<endl;
	
	return 0;
}
