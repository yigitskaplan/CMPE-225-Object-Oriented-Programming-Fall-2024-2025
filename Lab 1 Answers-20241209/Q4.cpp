#include<iostream>

using namespace std;

//One function works for all data types.
template<typename T>T myMax(T x, T y)
{
	return (x>y)?x:y;
}

int main()
{
	cout<<"Enter two integer variables(3,7), "<<"Max is: "<<myMax<int>(3,7)<<endl;//Call myMax for int
	cout<<"Enter two double variables(3.0,7.0),"<<"Max is: "<<myMax<double>(3.0,7.0)<<endl;//call myMax for double
	cout<<"Enter two character variables(g,a),"<<"Max is: "<<myMax<char>('g','a')<<endl;//call myMax for char
	
	return 0;
}
