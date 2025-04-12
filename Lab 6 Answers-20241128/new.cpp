#include <iostream>

using namespace std;

class Animal{
    public:
        virtual void makeSound(){
            cout<<"Animal Sound"<<endl;
       }
};

class Cat:public Animal{
    public:
        void makeSound(){
            cout<<"Meow!"<<endl;
        }
};

class Dog:public Animal{
    public:
        void makeSound(){
            cout<<"Woof woof!"<<endl;
        }
};

int main(){
    Animal *animal1=new Cat();
    Animal *animal2=new Dog();

    animal1->makeSound();
    animal2->makeSound();

    delete animal2;
    delete animal1;

    return 0;
}