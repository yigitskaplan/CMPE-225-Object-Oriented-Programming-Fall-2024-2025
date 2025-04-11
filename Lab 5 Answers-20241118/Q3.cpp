#include <iostream>

using namespace std;

class Vehicle 
{
    protected:
        string brand;
        string model;
        int year;

    public:
        Vehicle(string b, string m, int y):brand(b), model(m), year(y){}

        void displayInfo() 
        {
            cout << "Brand: " <<brand<< endl;
            cout << "Model: " <<model<< endl;
            cout << "Year: " <<year<< endl;
        }

        ~Vehicle(){}
};

class Bicycle:public Vehicle 
{
    private:
        bool hasGears;

    public:
        Bicycle(string b, string m, int y, bool gears):Vehicle(b, m, y), hasGears(gears){}

        void displayInfo() 
        {
            Vehicle::displayInfo();
            cout << "Has Gears: "<<(hasGears ? "Yes" : "No")<<endl;
        }
};

class Scooter:public Vehicle 
{
    private:
        int motorPower;

    public:
        Scooter(string b, string m, int y, int power):Vehicle(b, m, y), motorPower(power){}

        void displayInfo() 
        {
            Vehicle::displayInfo();
            cout << "Motor Power: " << motorPower << " watts" << endl;
        }
};

int main() 
{
    Bicycle bike("Trek", "Domane", 2023, true);
    cout << "Bicycle Information:" << endl;
    bike.displayInfo();
    cout << endl;

    Scooter scooter("Xiaomi", "M365", 2022, 500);
    cout << "Scooter Information:" << endl;
    scooter.displayInfo();

    return 0;
}


#include <iostream>

using namespace std;

class Vehicle{
    protected:
        string brand;
        string model;
        int year;
    public:
        Vehicle(string b_, string m_, int y_):brand(b_), model(m_), year(y_){}
        void displayInfo(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Model: "<<model<<endl;
            cout<<"Year: "<<year<<endl;

        ~Vehicle(){}
        }
};

class Bicycle:public Vehicle{
    private:
        bool hasGears;
    public:
        Bicycle(string b, string m, int y, bool gears):Vehicle(b, m, y),hasGears(gears){}
        void displayInfo(){
            Vehicle::displayInfo;
            cout<<"Has Gears: "<<(hasGears ? "Yes":"No")<<endl;
        }
};

class Scooter:public Vehicle{
    private:
        int motorPower;
    public:
        Scooter(string b, string m, int y, int mp):Vehicle(b, m, y), motorPower(mp){}
        void displayInfo(){
            Vehicle::displayInfo;
            cout<<"Motor Power: "<<motorPower<<" watts"<<endl;
        }
};

int main(){
    Bicycle b1("Trek", "Domane", 2023, true);
    cout<<"Bicycle Information: "<<endl;
    b1.displayInfo();

    Scooter s1("Xiomi", "M365", 2022, 500);



    
};