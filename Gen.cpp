#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "NPC.h"
#include "OptionsC.h"
using namespace std;
NPC WhiteRabbit;
int randNum;
vector<string> statNames = {"STR: ","Dex: ","CON: ","INT: ","WIS: ","CHA: "};

string RaceGen(vector<string> RaceSelection)
{
  int Num = (rand() % 30);
  return RaceSelection[Num];
}

string NameGen(vector<string> NameSelection)
{
  int Num = (rand() % 50);
  return NameSelection[Num];
}

vector<string> raceRead(vector<string> RaceSelection)
{
 RaceSelection.reserve(60);
  string line;
  ifstream raceList("Races.txt");
  while (getline(raceList, line))
   {
       RaceSelection.push_back(line);
   }
   return RaceSelection;
}

vector<string> nameRead(vector<string> NameSelection)
{
  NameSelection.reserve(60);
  //name list from https://koboldpress.com/the-random-dm-npc-names/
  string line;
  ifstream nameList("Names.txt");
  while (getline(nameList, line))
   {
       NameSelection.push_back(line);
   }
   return NameSelection;
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

void display(int CharNum)
{
  cout << "(" << CharNum << ")" << endl;
  cout << "Name: " << WhiteRabbit.Name << endl;
  cout << "Race: " << WhiteRabbit.Race << endl;
  cout << "Level: " << WhiteRabbit.Level << endl;

  for(int i = 0; i<=5; i++)
  {
    cout<< statNames[i];
    cout << WhiteRabbit.Stats[i] << endl;

  }
  cout << "" << endl;
  cout << "" << endl;
}


int writeTofile(int CharNum)
{
  ofstream CharSheet;
  CharSheet.open(to_string(CharNum)+ ". " + WhiteRabbit.Name + ".txt");
  CharSheet <<"Name: " << WhiteRabbit.Name << "\n";
  CharSheet <<"Race: " <<  WhiteRabbit.Race << "\n";
  CharSheet <<"Level: " <<  WhiteRabbit.Level << "\n";
  for(int i = 0; i<=5; i++)
  {
    CharSheet << statNames[i];
    CharSheet << WhiteRabbit.Stats[i] << "\n";
  }
  return 0;
}

int Gen(vector<string> NameSelection, vector<string> RaceSelection, Options& MyOptions, int CharNum)
{
randNum = 0;
WhiteRabbit.Name = NameGen(NameSelection);
WhiteRabbit.Race = RaceGen(RaceSelection);
if(MyOptions.selectLevel == 2)
{
cout << "Level of NPC: (Max 20) "<< endl;
cin >> WhiteRabbit.Level;
}
if(MyOptions.selectLevel == 1)
{
  WhiteRabbit.Level = MyOptions.setLevel;
}
if(MyOptions.selectLevel == 3)
{
  randNum = (rand() % 20 + 1);
  WhiteRabbit.Level = randNum;
}
if(MyOptions.selectLevel == 4)
{
  MyOptions.hlbound =   MyOptions.hlbound - MyOptions.llbound;
  MyOptions.hlbound += 1;
  randNum = (rand() %   MyOptions.hlbound) + MyOptions.llbound;
  WhiteRabbit.Level = randNum;
}

if (WhiteRabbit.Level > 20)
{
  WhiteRabbit.Level = 20;
}

for(int i = 0; i <=5; i++)
{
  WhiteRabbit.Stats[i] = StatGen();
}
if(MyOptions.selectLevel > -1)
{
display(CharNum);
writeTofile(CharNum);
}
return 0;
}
