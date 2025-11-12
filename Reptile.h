#ifndef Reptile_H
#define Reptile_H
#include "Animal.h"
#include <string>
using namespace std;

class Reptile : public Animal {
    private :
     bool isVenomous;
    public:
    Reptile();
    Reptile(string name,int age,bool isHungry,bool isVenomous) : Animal(string name,int age ,bool isHungry) ;
    ~Reptile();

    void setisVenomous();
    string getisVenomous(bool is isVenomous)const;
};
#endif
