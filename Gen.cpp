#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "NPC.h"
using namespace std;
NPC WhiteRabbit;
string RaceGen()
{
  vector<string> RaceSelection;
  string line;
  ifstream raceList("Races.txt");
  while (getline(raceList, line))
   {
       RaceSelection.push_back(line);
   }
  int Num = (rand() % 30);
  return RaceSelection[Num];
}

string NameGen()
{
  //name list from https://koboldpress.com/the-random-dm-npc-names/
  vector<string> NameSelection;
  string line;
  ifstream nameList("Names.txt");
  while (getline(nameList, line))
   {
       NameSelection.push_back(line);
   }
  int Num = (rand() % 50);
  return NameSelection[Num];
}

int StatGen()
{
vector<int> Roll;
Roll = {0,0,0,0};
//cout << "Rolls: ";
for(int i = 0; i <=3; i++)
{
  Roll[i] = (rand() % 6 + 1);
  //cout << Roll[i] << " ";
}
int LowDrop = Roll[0];

for(int i = 1; i <=3; i++)
{
  if (Roll[i] < LowDrop)
  {
    LowDrop = i;
  }
}
//cout << " Dropping lowest number: " << Roll[LowDrop] << endl;
Roll[LowDrop] = 0;
int sum = 0;
for(int i = 0; i <=3; i++)
{
  sum += Roll[i];
}

//cout << "Total is: " << sum << endl;
return sum;
}
void display()
{
  vector<string> statNames = {"STR: ","Dex: ","CON: ","INT: ","WIS: ","CHA: "};
  cout << "Name: " << WhiteRabbit.Name << endl;
  cout << "Race: " << WhiteRabbit.Race << endl;
  cout << "Level: " << WhiteRabbit.Level << endl;

  for(int i = 0; i<=5; i++)
  {
    cout<< statNames[i];
    cout << WhiteRabbit.Stats[i] << endl;

  }

}

int Gen(bool selectLevel, int setLevel)
{
WhiteRabbit.Stats = {0,0,0,0,0,0};
WhiteRabbit.Name = NameGen();
WhiteRabbit.Race = RaceGen();
if(selectLevel == true)
{
cout << "Level of NPC: (Max 20) "<< endl;
cin >> WhiteRabbit.Level;
}
else
{
  WhiteRabbit.Level = setLevel;
}
if (WhiteRabbit.Level > 20)
{
  WhiteRabbit.Level = 20;
}

for(int i = 0; i <=5; i++)
{
  WhiteRabbit.Stats[i] = StatGen();
}

return 0;
}
