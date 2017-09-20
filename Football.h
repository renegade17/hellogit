#include <iostream>


#include <string>
using namespace std;

#ifndef Football_h
#define Football_h

class Football
{
private:
string teamName;
int goals;

public:

Football(string t, int g);

void setTeamName (string t);
string getTeamName();
void setGoals(int g);
int getGoals();

void displayInfo();


};
#endif

 
