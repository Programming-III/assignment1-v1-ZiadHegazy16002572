#ifndef Mammal_H
#define Mammal_H
#include "Animal.h"
#include <string>
using namespace std;

class Mammal : public Animal {
    private:
        string furColor;

    public:
    Mammal();
    Mammal(string name,int age,bool isHungry,string furColor) : Animal(string name,int age ,bool isHungry) ;
    ~Mammel()

    void setfurColor();
    string getfurColor(String furColor)const;
};
#endif
