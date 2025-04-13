#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string name,surname;
    int id;
    double mid1,mid2,final;

    ifstream fin("allstudentgrades.txt");
    ofstream fou("studentsFinalScore.txt");

    while (!fin.eof())
    {
        fin>>name>>surname>>id>>mid1>>mid2>>final;
        fou<<name<<" "<<surname<<" "<<id<<" "<<mid1<<" "<<mid2<<" "<<final<<" "<<mid1*0.3+mid2*0.3+final*0.4<<endl;
    }
    
    fin.close();
    fou.close();
    
    return 0;
}