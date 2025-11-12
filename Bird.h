#ifndef Bird_H
#define Bird_H
#include "Animal.h"
#include <string>
using namespace std;

class Bird : public Animal {
    private:
      float wingSpan;
    public:
    Bird();
    Bird(string name,int age,bool isHungry,float wingSpan) : Animal(string name,int age ,bool isHungry) ;
    ~Bird();
    void setwingSpan();
    string getwingSpan(float wingSpan)const;
};
#endif
