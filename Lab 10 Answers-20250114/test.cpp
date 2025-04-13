#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string name, sName;
    int age;

    ifstream fin("file.txt");

    getline(fin, name, ' ');
    getline(fin, sName, ',');
    fin >> age;

    name.append(1,' ');
    name += sName;

    cout<<name<<endl;
    cout<<age<<endl;

    fin.close();

    return 0;
}
