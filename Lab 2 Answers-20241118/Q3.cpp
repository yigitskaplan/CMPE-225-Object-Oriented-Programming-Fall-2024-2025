#include <iostream>

using namespace std;

class Book 
{
	public:
    	string title;

	    Book(string bookTitle) 
		{
        	title=bookTitle;
        	cout<<"Book created: "<<title<<endl;
    	}
	    ~Book() 
		{
        	cout<<"Book destroyed: "<<title <<endl;
    	}
    	void display()  
		{
        	cout<<"Title: "<<title<< endl;
    	}
};

int main() 
{
    Book *myBook=new Book("The Little Prince");
    myBook->display();

    delete myBook;

    return 0;
}
