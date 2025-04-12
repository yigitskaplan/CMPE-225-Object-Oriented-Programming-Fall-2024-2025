#include <iostream>

using namespace std;

class Book{
	public:
		string title;
		Book(string a){
			title = a;
			cout<<"Book created: "<<title<<endl;
		}
		void display(){
			cout<<"Title: "<<title<<endl;
		}
		~Book(){
			cout<<"Book destroyed: "<<title<<endl;
		}
};

int main(){
	Book *myBook=new Book("The Little Prince");
	myBook->display();
	delete myBook;
	
	return 0;
}
