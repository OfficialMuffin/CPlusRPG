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

    cout << initSpawn << endl;

    cout << "Please choose a spawn point: " << endl;
    cout << "1) Forest" << endl;
    cout << "2) Town" << endl;
    cout << "3) City" << endl;

    int spawnChoice;

    //Choose story line based on the option chosen.
    
    switch(spawnChoice) {
        case 1 
            cout << "*You awaken in a small shack and step outside*" << endl;
            Sleep(1000)
            cout << "*You see a silhouette hiding behind the tree*" << endl;
            n1.setName("NPC John");
            Sleep(1000);
            cout << "*You have been met by " << n1.getName() << "*" << endl;
            Sleep(1500);
            int NPCgreet;
            cout << "Will you shout to ask or leave him be?: (Type 1 to ask or 2 to leave)" << endl;
            cin >> NPCgreet;

            switch (NPCgreet) {
                case 1 :
                    cout << "*The silhouette slowly tiptoes towards you, its a small man*" << endl;
                    Sleep(1000);
                    cout << "*The mysterious man speaks* I thought you are one of them..." << endl;
                    Sleep(1000);
                    cout << "*You reply* One of who?" << endl;
                    Sleep(1000);
                    cout << "*He sighs* You're new arn't you...Take this and leave... Its not safe here!" << endl;
                    playerCoins = 2.50;
                    cout << "You now have " << playerCoins << "!" << endl;
                    




            }

        case 2 :
            cout << "You hear a car park up on the drive in the semi-detached house close by." << endl;
            cout << "You hear the footsteps of someone approaching your shack. They then knock on the door of your shack"
            n2.setName("NPC Dave");
            Sleep(1000);
            cout << "You have been met by " << n2.getName() << endl;
    }

    return 0;
}
