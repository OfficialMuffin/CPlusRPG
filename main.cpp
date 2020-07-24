#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif // _WIN32

#include <iostream>
#include <string.h>
#include <ctime>
#include <iomanip>
#include "player.h"
#include "npc.h"
using namespace std;


int main()
{
    /** Initialise Variables */
    string name;
    Player p1;
    NPC n1, n2;
    p1.setCoin(0.0);
    p1.setXp(0.0);

    /** Welcome Message w/ User's Name */
    cout << "What name would you like to use in this game?: " << endl;
    cin >> name;
    p1.setName(name);
    cout << "Welcome, " << p1.getName() << "!" << endl;
    sleep(1);

    /** Starting Spawn Point */
    string initSpawn[] = {"Forest", "Town", "City"};
    for(int i = 1; i > sizeof(initSpawn); i++) {
        cout << initSpawn << endl;
    }

    cout << "Where would you like to spawn?: (Select 1, 2 or 3 and press enter)" << endl;

    /** Let user choose spawn from the array. */
    int spawnChoice;
    cout << "1) Forest" << endl;
    cout << "2) Town" << endl;
    cout << "3) City" << endl;
    cin >> spawnChoice;


    /** Choose story line based on the random option given.*/

    switch(spawnChoice) {
        case 1 :
            cout << "*You awaken in a small shack and step outside*" << endl;
            sleep(1);
            cout << "*You see a silhouette hiding behind the tree*" << endl;
            sleep(1.5);
            int NPCgreet;
            cout << "Will you shout to ask or leave him be?: (Type 1 to ask or 2 to leave)" << endl;
            cin >> NPCgreet;

            switch (NPCgreet) {
                case 1 :
                    cout << "*The silhouette slowly tiptoes towards you, its a small man*" << endl;
                    sleep(1);
                    n1.setName("NPC John");
                    sleep(1);
                    cout << "*You have been met by " << n1.getName() << "*" << endl;
                    sleep(1.5);
                    cout << "*The mysterious man speaks* I thought you are one of them..." << endl;
                    sleep(1);
                    cout << "*You reply* One of who?" << endl;
                    sleep(1);
                    cout << "*He sighs* You're new arn't you...Take this and leave... Its not safe here!" << endl;
                    sleep(2);
                    p1.setCoin(2.50);
                    p1.setXp(0.5);
                    cout << "You now have " << p1.getCoin() << " Coins!" << endl;
                    cout << "You now have " << p1.getXp() << " XP!" << endl;
                    break;


                case 2 :
                    cout << "*You leave him be and continue on your way.*" << endl;
                    break;

                default :
                    return 0;
            }

        case 2 :
            cout << "You hear a car park up on the drive in the semi-detached house close by." << endl;
            sleep(1);
            cout << "You hear the footsteps of someone approaching your shack. They then knock on the door of your shack" << endl;
            n2.setName("NPC Dave");
            sleep(1);
            cout << "You have been met by " << n2.getName() << endl;
            break;

        case 3 :
            cout << "*You are walking on the pavement and suddenly a car stops next to you and a window winds down slowly*" << endl;
            sleep(1);
            cout << "*A guy sticks his head out of the window*" << endl;
            break;

        default :
            return 0;

    }

    return 0;
}
