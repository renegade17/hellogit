#include <string>
 #include "Football.h"
 
 Football::Football(string t, int g)
 {
	 teamName=t;
	 goals=g;
 }
 
 // sets team
 void Football::setTeamName(string t)
 {
	 teamName=t;
 }
 
 //returns team
 string Football::getTeamName() 
 { 
	 return teamName;
 }
 
 //set goals
 void Football::setGoals(int g)
 {
	 goals=g;
 }
 
 //returns goals
 int Football::getGoals()
 {
	 return goals;
 }
 
 //displays all of the team data
 void Football::displayInfo()
 {
     cout<<"Team Name: "<< teamName << endl; 
	 cout<<"Team Goals: "<< goals << endl;
 }
 
	 
