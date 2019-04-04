using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "mainMenu.h"
#include "Gen.h"
#include "CharCreator.h"
#include "OptionsC.h"
int mainMenu();
void display();
vector<string> nameRead(vector<string> NameSelection);
vector<string> raceRead(vector<string> RaceSelection);
int Gen(vector<string> NameSelection, vector<string> RaceSelection, Options& MyOptions);
int CharCreator(int CharNum);
int CharNum = 0;
Options MyOptions;
int main()
{
  vector<string> NameSelection;
  vector<string> RaceSelection;
  NameSelection = nameRead(NameSelection);
  RaceSelection = raceRead(RaceSelection);
  int choice = 0;
  srand(time(NULL));
  
//force single first creation to reduce crashes?
  choice = -1;
  MyOptions.configureBasedOnChoice(choice);
  Gen(NameSelection,RaceSelection,MyOptions,CharNum);

  choice = mainMenu();
  while (choice < 6)
  {
  MyOptions.configureBasedOnChoice(choice);
  if(choice < 5)
  {
  for(int i = 0; i < MyOptions.loopCount; i++)
  {
    CharNum += 1;
    Gen(NameSelection,RaceSelection,MyOptions,CharNum);
  }
}
  else if (choice == 5)
  {
      CharCreator(CharNum);
  }
  choice = mainMenu();
}

  return 0;
}
