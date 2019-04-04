#include "Gen.h"
#include <iostream>
#include <vector>
using namespace std;
void display ();
int selectLevel ;
int setLevel;
int loopCount;

int choiceOne(vector<string> NameSelection,vector<string> RaceSelection, int CharNum)
{
  selectLevel = 1;
  loopCount = 0;
  int i = 0;
  cout << "Level of NPCs: (Max 20) ";
  cin >> setLevel;
  cout << "How many NPCs would you like to create?: ";
  cin >> loopCount;
  cout<< "" << endl;
  cout<< "" << endl;
  for(i = 1; i <= loopCount; i++)
 {
  CharNum = CharNum + 1;
  Gen(selectLevel,setLevel,NameSelection,RaceSelection, CharNum);
  }
return 0;
}

int choiceTwo(vector<string> NameSelection,vector<string> RaceSelection,int CharNum)
{
  selectLevel = 2;
  loopCount = 0;
  cout << "How many NPCs would you like to create?: ";
  cin >> loopCount;
  for(int i = 1; i <= loopCount; i++)
 {
  CharNum = CharNum + 1;
  Gen(selectLevel,setLevel,NameSelection,RaceSelection,CharNum);
 }
   return 0;
}

 int choiceThree(vector<string> NameSelection,vector<string> RaceSelection,int CharNum)
 {
   selectLevel = 3;
   loopCount = 0;
   cout << "How many NPCs would you like to create?: ";
   cin >> loopCount;
   for(int i = 1; i <= loopCount; i++)
  {
   CharNum = CharNum + 1;
   Gen(selectLevel,setLevel,NameSelection,RaceSelection,CharNum);
  }
 return 0;
}
