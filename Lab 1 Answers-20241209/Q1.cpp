#include <iostream>

using namespace std;

int main() 
{
    int age;
    int months;
    double totalCost;

    //Get the age and number of months from the user
    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Enter the number of months you will stay: ";
    cin>>months;

    //Determine the monthly fee based on age
    double monthlyFee;

    if(age<18) 
	{
        monthlyFee=50;
    } 
	else if(age>=18 && age<=25) 
	{
        monthlyFee=70;
    } 
	else 
	{ //age>25
        monthlyFee=100;
    }

    //Calculate total cost
    totalCost=monthlyFee*months;

    //Display the total cost
    cout<<"The total cost of gym membership is: $"<<totalCost<<endl;

    return 0;
}

