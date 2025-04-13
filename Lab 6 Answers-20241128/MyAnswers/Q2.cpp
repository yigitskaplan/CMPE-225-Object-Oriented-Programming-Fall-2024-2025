#include <iostream>

using namespace std;

class Animal{
	public:
		virtual void makeSound(){
			cout<<"Animal sound"<<endl;
		}
};

class Cat:public Animal{
	public:
		void makeSound(){
			cout<<"Meow!!"<<endl;
		}	
};

class Dog:public Animal{
	public:
		void makeSound(){
			cout<<"Woof woof!"<<endl;
		}
};

int main(){
	//Managing objects of derived classes with pointers to the base class(poly.)
	Animal *animal1= new Cat();
	Animal *animal2= new Dog();
	animal1->makeSound();
	animal2->makeSound();
	delete animal1;
	delete animal2;
	return 0;
}
