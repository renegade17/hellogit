 #include "Football.h"
 #include <vector>
 #include <string>
 
 int main ()
 {
	 string name;
	 int goals;
	 vector <Football> Leaguecup;
	 
	 for (int i=0;i<4;i++)
{
	 cout<<"Enter your team name "<<endl;
	 cin>>name;
	 cout<<"Enter goals scored "<<endl;
	 cin>>goals;
	 
	 Football Tourney(name, goals);
	 Leaguecup.push_back ({name, goals});
 }
  for (auto v:Leaguecup)
  {
	  cout<<v.getTeamName()<<" "<<endl;
	  cout<<v.getGoals()<<endl;
  }
  cout<<endl;
}

 
 
 
	 
