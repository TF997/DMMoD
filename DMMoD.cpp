using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mainMenu.h"
#include "Gen.h"
string RaceGen();
int mainMenu();
void display ();
int main()
{
  srand(time(NULL));
  bool selectLevel;
  int choice = mainMenu();
  int loopCount = 0;
  int setLevel = 0;
  if (choice == 1)
  {
  selectLevel = true;
  cout << "How many NPC would you like to create?: ";
  cin >> loopCount;
  for(int i = 1; i <= loopCount; i++)
  {
  Gen(selectLevel,setLevel);
  display();
  cout << "" << endl;
  cout << "" << endl;
  }
  }

  if (choice == 2)
  {
  selectLevel = false;
  cout << "Level of NPCs: (Max 20) ";
  cin >> setLevel;
  cout << "" << endl;
  cout << "How many NPC would you like to create?: ";
  cin >> loopCount;
  for(int i = 1; i <= loopCount; i++)
  {
  Gen(selectLevel,setLevel);
  display();
  cout << "" << endl;
  cout << "" << endl;
  }
  }
  return 0;
}
