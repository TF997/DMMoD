using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mainMenu.h"
#include "Gen.h"
#include "Options.h"
int mainMenu();
void display();
int choiceOne();
int choiceTwo();
int main()
{
  srand(time(NULL));

  int choice = mainMenu();

  if (choice == 1)
  {
    choiceOne();
  }

  if (choice == 2)
  {
    choiceTwo();
  }
  return 0;
}
