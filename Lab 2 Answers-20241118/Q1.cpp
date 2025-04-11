#include <iostream>

using namespace std;

class PlayerInformation
{
    public:
        string name;
        string surname;
        int age;

        PlayerInformation(string playerName, string playerSurname, int playerAge)
        {
            name = playerName;
            surname = playerSurname;
            age = playerAge;
        }
};

int main()
{
    PlayerInformation player("Kobe", "Bryant", 44);
    cout << "Name: " << player.name << ", Surname: " << player.surname << ", Age: " << player.age << endl;

    return 0;
}

