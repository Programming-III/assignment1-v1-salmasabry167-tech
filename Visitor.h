#ifndef VISITOR_H
#define VISITOR_H
using namespace std;

class Visitor{
    private:
    string visitorName;
    int ticketsBought;
    
    public:
    Visitor();
    Visitor(string vn , int tickets);
    ~Visitor();
    void displayInfo();
    string getvisitorName();
    void setvisitorName(string name);
    int ticketsBought();
    void setticketsBought(int tickets);
    
};
#endif
