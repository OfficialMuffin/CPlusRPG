#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
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

#endif // _PLAYER_H_
