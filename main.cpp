#include "Enclosure.h"
#include "Animal.h"
#include "Visitor.h"
#include "Bird.h"
#include "Reptile.h"
#include "mamm"
#include <string>
using namespace std;

Animal::Animal(){
    name = "";
    age = 0;
    isHungry = false;
}
Animal::Animal(string name,int age ,bool isHungry){
    name = n; 
    age = a;
    isHungery= q;
}
Animal::~Animal(){};

Mammal::Mammal(){
    furColor="";
}
Mammal::Mammal(string name,int age,bool isHungry,string furColor) : Animal(string name,int age ,bool isHungry) {
 furColor= f;
}
Mammel::~Mammel(){};

Bird::Bird(){
    wingSpan= 0.0;
}
Bird::Bird(string name,int age,bool isHungry,float wingSpan) : Animal(string name,int age ,bool isHungry){
    wingSpan= ws;
}
Bird::~Bird(){};

Reptile::Reptile(){
    isVenomous= false;
}
Reptile::Reptile(string name,int age,bool isHungry,bool isVenomous) : Animal(string name,int age ,bool isHungry){
    isVenomous= v;
}
Reptile::~Reptile(){};
int main(){



return 0;
}
