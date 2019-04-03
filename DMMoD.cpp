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
  //RaceGen();
  mainMenu();
  Gen();
  display();
  return 0;
}
