#include<iostream>

using namespace std;

class Increment;
class Square
{
	int side;
	public:
		Square(){side=2;}
		void print()
		{
			cout << "side of square is: " << side<<endl;
		}
		friend class Increment;
};

class Increment
{
	int y;
	public:
		Increment()
		{
			cout<<"enter increment value: ";
			cin>>y;
		}
	void change(Square&obj){obj.side+=y;}
};

int main()
{
	Square s;
	s.print();
	Increment t;
	t.change(s);
	s.print();
}
