#ifndef _NPC_H_
#define _NPC_H_

#include <string>
using namespace std;

//Store NPC names
class NPC
{
    private:
        string name;

    public:
        NPC();
        string getName(){
            return name;
        }
        void setName(string newName) {
            name = newName;
        }

};

#endif // _NPC_H_
