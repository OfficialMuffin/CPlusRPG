#ifndef _NPC_H_
#define _NPC_H_

#include <string>
using namespace std;

//Store NPC names
class NPC {
    public:
        string getName(){
            return name;
        }
        void setName(string newName) {
            name = newName;
        }
    private:
        string name;
};

#endif // _NPC_H_
