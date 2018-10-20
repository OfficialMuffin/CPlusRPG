#include <iostream>
#include <string.h>
#include <ctime>
#include <windows.h>
#include <iomanip>
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
    int playerXP = 0;
    float playerCoins;
    Player p1;
    NPC n1;
    NPC n2;

    //Welcome Message w/ User's Name
    cout << "What name would you like to use in this game?: " << endl;
    cin >> name;
    p1.setName(name);
    cout << "Welcome, " << p1.getName() << "!" << endl;
    Sleep(1000);

    //Starting Spawn Point
    const int ARRAY_SIZE = 3;
    string initSpawn[ARRAY_SIZE] = {"Forest", "Town", "City"};
    //Choose Random Spawn From The Array.
    cout << "You awaken in a small shack located somewhere in the " << "INSERT RAND()" << endl;
    playerCoins = 2.50;
    cout << "You now have " << playerCoins << "!" << endl;

    //Choose story line based on the random option given.
    /*
    switch(s) {
        case "Forest" :
            cout << "*You see a silhouette hiding behind the tree*" << endl;
            n1.setName("NPC John");
            Sleep(1000);
            cout << "*You have been met by " << n1.getName() << "*" << endl;
            Sleep(1500);
            string NPCgreet;
            cout << "Will you shout to ask or leave him be?: (Type ask or leave)" << endl;
            cin >> NPCgreet;

            switch (NPCgreet) {
                case "ask" :
                    cout << "*The silhouette slowly tiptoes towards you, its a small man*" << endl;
                    Sleep(1000);
                    cout << "*The mysterious man speaks* I thought you are one of them..."
                    Sleep(1000);
                    cout << "*You reply* One of who?"
                    Sleep(1000);
                    cout << "*He sighs* You're new arn't you...Take this and leave... Its not safe here!" << endl;
                    playerCoins = 2.50;
                    cout << "You now have " << playerCoins << "!" << endl;




            }

        case "Town" :
            cout << "You hear a car park up on the drive in the semi-detached house close by." << endl;
            cout << "You hear the footsteps of someone approaching your shack. They then knock on the door of your shack"
            n2.setName("NPC Dave");
            Sleep(1000);
            cout << "You have been met by " << n2.getName() << endl;
    }
    */

    return 0;
}
