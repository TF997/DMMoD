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
  int choice = mainMenu();

  if (choice == 1)
  {
  Gen();
  display();
  }

  return 0;
}
