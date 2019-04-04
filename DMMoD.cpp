using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "mainMenu.h"
#include "Gen.h"
#include "Options.h"
int mainMenu();
void display();
int choiceOne(vector<string> NameSelection,vector<string> RaceSelection,int CharNum );
int choiceTwo(vector<string> NameSelection,vector<string> RaceSelection,int CharNum );
int choiceThree(vector<string> NameSelection,vector<string> RaceSelection,int CharNum );
vector<string> nameRead(vector<string> NameSelection);
vector<string> raceRead(vector<string> RaceSelection);
int CharNum = 0;
int main()
{
  vector<string> NameSelection;
  vector<string> RaceSelection;
  NameSelection = nameRead(NameSelection);
  RaceSelection = raceRead(RaceSelection);
  srand(time(NULL));
  int choice = 0;
  while(choice < 4)
  {
  choice = mainMenu();
  if (choice == 1)
  {
    choiceOne(NameSelection,RaceSelection,CharNum);
  }

  if (choice == 2)
  {
    choiceTwo(NameSelection,RaceSelection,CharNum);
  }

  if (choice == 3)
  {
    choiceThree(NameSelection,RaceSelection,CharNum);
  }
 }
  return 0;
}
