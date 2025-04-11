#include<iostream>
#include <sstream>

using namespace std;

class Math
{
	private:
		int num1;
		int num2;
		int result;
	public:

	void add()
	{
		result = num1+num2;
	}

	void substract()
	{
		result = num1-num2;
	}

	void multiply()
	{
		result = num1*num2;
	}

 	friend ostream & operator << (ostream &out, const Math &c);
    friend istream & operator >> (istream &in,  Math &c);
};

ostream & operator << (ostream &out, const Math &c)
{
	out<<c.result;
 	return out;
}

istream & operator >> (istream &in,  Math &c)
{
	in>>c.num1>>c.num2;
	return in;
}

int main()
{
	Math c;
	cout<<"Enter two integers: "<<endl;
	cin>>c;
	c.add();
	cout<<"Addition:"<<c<<endl;
	c.substract();
	cout<<"Substraction:"<<c<<endl;
	c.multiply();
	cout<<"Multiplication:"<<c<<endl;
}

