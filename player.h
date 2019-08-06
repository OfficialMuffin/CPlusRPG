#include <iostream>
#include <string.h>
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
