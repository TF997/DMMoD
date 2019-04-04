using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "mainMenu.h"
#include "Gen.h"
#include "Options.h"
#include "CharCreator.h"
int mainMenu();
void display();
int choiceOne(vector<string> NameSelection,vector<string> RaceSelection,int CharNum );
int choiceTwo(vector<string> NameSelection,vector<string> RaceSelection,int CharNum );
int choiceThree(vector<string> NameSelection,vector<string> RaceSelection,int CharNum );
int choiceFour(vector<string> NameSelection,vector<string> RaceSelection,int CharNum);
vector<string> nameRead(vector<string> NameSelection);
vector<string> raceRead(vector<string> RaceSelection);
int CharCreator(int CharNum);
int CharNum = 0;
int main()
{
  vector<string> NameSelection;
  vector<string> RaceSelection;
  NameSelection = nameRead(NameSelection);
  RaceSelection = raceRead(RaceSelection);
  srand(time(NULL));
  int choice = 0;
  while(choice < 6)
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
  if (choice == 4)
  {
    choiceFour(NameSelection,RaceSelection,CharNum);
  }
  if (choice == 5)
  {
    CharCreator(CharNum);
  }
 }
  return 0;
}
