#include <iostream>
#include <string.h>
using namespace std;

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
