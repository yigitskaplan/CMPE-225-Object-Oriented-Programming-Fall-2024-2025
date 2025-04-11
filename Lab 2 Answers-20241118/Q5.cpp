#include<iostream>

using namespace std;

class Square
{
	private:
		int value;
	public:
		Square()
		{
			value = 1;
			cout<<"default constructor"<<endl;
		}
		
		Square(int val)
		{
			value=val;
			cout<<"overloaded constructor"<<endl;
		}
		
		int area();
		int perimeter();
		~Square()
		{
			cout<<"destructor"<<endl;
		}
};

int Square::area()
{
	return value*value;
}

int Square::perimeter()
{
	return 4*value;
}


int main()
{
	Square s1;
	Square s2(3);
	
	cout<<"Perimeter of the first object:"<<s1.perimeter()<<endl;
	cout<<"Area of the first object:"<<s1.area()<<endl;
	
	cout<<"Perimeter of the second object:"<<s2.perimeter()<<endl;
	cout<<"Area of the second object:"<<s2.area()<<endl;
	
	return 0;
	
}
