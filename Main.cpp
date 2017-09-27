 #include "Football.h"
 #include <vector>
 #include <string>
 
 int linearSearch(auto data, auto key)//prototype
{
	for (int i=0; i<data.size(); i++)
	{
		if (data[i].getTeamName()==key)
		return i;
	}
	return -1;
}

 int main ()
 {
	 string name;
	 int goals;
	 int l;
	 string searchkey;
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
  
  cout<<"Enter a value to search for";
  cin>>searchkey;
  while (searchkey!="#")
  { 
	  int l = linearSearch (Leaguecup,searchkey);

	  cout<<searchkey<<"was";
	  if (l==-1)
	  cout<<"Not found"<<endl;
	  else
	  cout<<"found at"<<l<<endl;
	  cout<<"Enter a value to search for"<<endl;
	  cin>>searchkey;
  }
  return 0;
  
}

 
 
 
	 
