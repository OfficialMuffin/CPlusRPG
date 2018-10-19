#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;

//Helps with storing player's names
class Player {
    string name;
public:
    string getName(){
        return name;
    }
    void setName(string newName) {
        name = newName;
    }
};

//Store NPC names
class NPC {
    string name;
public:
    string getName(){
        return name;
    }
    void setName(string newName) {
        name = newName;
    }
};

int main()
{
    //Initialise Variables
    string name;
    Player p1;
    NPC n1;
    NPC n2;

    //Welcome Message w/ User's Name
    cout << "Welcome, what name would you like to use in this game?: " << endl;
    cin >> name;
    p1.setName(name);
    cout << "Hello there, " << p1.getName() << endl;

    //Starting Spawn Point
    const int ARRAY_SIZE = 3;
    string initSpawn[ARRAY_SIZE] = {"Forest", "Town", "City"};
    //Choose Random Spawn From The Array.
    cout << "You awaken in a small shack located somewhere in the " << "INSERT RAND()" << endl;









    return 0;
}
