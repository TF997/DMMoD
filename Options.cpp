#include "Gen.h"
#include <iostream>
using namespace std;
void display ();
bool selectLevel = false;
int setLevel = 0;
int loopCount = 0;

int choiceOne()
{
  selectLevel = false;
  loopCount = 0;
  cout << "Level of NPCs: (Max 20) ";
  cin >> setLevel;
  cout << "How many NPC would you like to create?: ";
  cin >> loopCount;
  for(int i = 1; i <= loopCount; i++)
  {
  Gen(selectLevel,setLevel);
  display();
  cout << "" << endl;
  cout << "" << endl;
  }
  return 0;
}

int choiceTwo()
{
  selectLevel = true;
  loopCount = 0;
  cout << "How many NPC would you like to create?: ";
  cin >> loopCount;
  for(int i = 1; i <= loopCount; i++)
  {
  Gen(selectLevel,setLevel);
  display();
  cout << "" << endl;
  cout << "" << endl;
  }
  return 0;
}
