#ifndef Enclosure_H
#define Enclosure_H
#include <string>
using namespace std;

class Enclosure{
    private :
    virtual [] Animal*;
    int capacity;
    int currentCount;

    public :
        void setcapacity();
        void setcurrentCount();
        int getcapacity(int capacity)const;
        int getcurrentCount(int currentCount)const;
        Enclosure();
        Enclosure(int currentCount , int capacity ,virtual [] Animal*);
        ~Enclosure();
        void addAnimal(Animal*a)const;
        void displayAnimals()const;
    
};
#endif
