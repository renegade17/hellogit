 #include "Football.h"
 #include "Football.cpp"
 #include <vector>
 
 int main ()
 {
	 string name;
	 int goals;
	 vector <Football> Leaguecup (4);
	 
	 for (int i=0;i<Leaguecup.size();i++)
{
	 cout<<"Enter your team name";
	 getline(cin, name);
	 cout<<"Enter goals scored";
	 cin>>goals;
 }
 
 
	 
