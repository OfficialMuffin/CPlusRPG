#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
using namespace std;

//Helps with storing player's names
class Player {
    public:
        Player();
        string getName(){
            return name;
        }

        double getXp(){
            return xp;
        }

        float getCoin(){
            return coin;
        }

        void setName(string newName) {
            name = newName;
        }

        void setXp(double newXp) {
            xp = newXp;
        }

        void setCoin(float newCoin) {
            coin = newCoin;
        }
    private:
        string name;
        double xp;
        float coin;
};

#endif // _PLAYER_H_
