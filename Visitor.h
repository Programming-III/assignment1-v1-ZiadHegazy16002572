#ifndef Visitor_H
#define Visitor_H
#include <string>
using namespace std;

class Visitor{
    private:
    string visitorName;
    int ticketBought;
    public:
    Visitor();
    Visitor(string visitorName , int ticketBought);
    ~Visitor();

    void setvisitorName();
    void setticketBought();

    string getvisitorName(string visitorName)const;
    int getticketBought(int ticketBought)const;

    void displayInfo()const;
};
#endif
