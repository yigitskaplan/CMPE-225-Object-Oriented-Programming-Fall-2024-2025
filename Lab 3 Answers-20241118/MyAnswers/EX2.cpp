#include <iostream>

using namespace std;

class Increment;//IMPORTANT!!!!
class Square{
	int side;
	public:
		Square(){side = 2;}
		
		void printf(){
			cout<<"side of square is: "<<side<<endl;
		}
		
		friend class Increment;//IMPORTANT!!!!
};
class Increment{
	int y;
	public:
		Increment(){
			cout<<"enter incerement value: ";
			cin>>y;
		}
		void change(Square&obj){
			obj.side+=y;
		}
		//void change(Square&);
};
/*void Increment::change(Square&obj){
	obj.side+=y;
}*/
int main(){
	Square S1;
	S1.printf();
	Increment I1;
	I1.change(S1);
	S1.printf();
	
	return 0;
}
