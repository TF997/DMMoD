using namespace std;
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "NPC.h"
#include "Gen.h"
NPC CustomChar;
int StatGen();
int writeTofile(int CharNum, NPC& WhiteRabbit);
void display(int CharNum, NPC& WhiteRabbit);
int CharCreator(int CharNum)
{
  string LastName;
  cout << "Character First Name: ";
  cin >> CustomChar.Name;
  cout << "Character Last Name: ";
  cin >> LastName;
  CustomChar.Name = CustomChar.Name + " " +LastName;
  cout << "" << endl;
  cout << "Character Race: ";
  cin >> CustomChar.Race;
  cout << "" << endl;
  cout << "Character Level: ";
  cin >> CustomChar.Level;
  if (CustomChar.Level > 20)
  {
    CustomChar.Level = 20;
  }
  cout << "" << endl;

  for(int i = 0; i <=5; i++)
  {
    CustomChar.Stats[i] = StatGen();
  }
  display(-1, CustomChar);
  writeTofile(-1, CustomChar);
return 0;
}
