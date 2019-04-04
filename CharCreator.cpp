using namespace std;
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "NPC.h"
#include "Gen.h"
NPC CustomChar;
int StatGen();

int writeTofileCC()
{
  vector<string> statNames = {"STR: ","Dex: ","CON: ","INT: ","WIS: ","CHA: "};
  ofstream CharSheet;
  CharSheet.open("Custom Character. " + CustomChar.Name + ".txt");
  CharSheet <<"Name: " << CustomChar.Name << "\n";
  CharSheet <<"Race: " <<  CustomChar.Race << "\n";
  CharSheet <<"Level: " <<  CustomChar.Level << "\n";
  for(int i = 0; i<=5; i++)
  {
    CharSheet << statNames[i];
    CharSheet << CustomChar.Stats[i] << "\n";
  }
  return 0;
}

void displayCC(int CharNum)
{
  vector<string> statNames = {"STR: ","Dex: ","CON: ","INT: ","WIS: ","CHA: "};
  cout << "(" << CharNum << ")" << endl;
  cout << "Name: " << CustomChar.Name << endl;
  cout << "Race: " << CustomChar.Race << endl;
  cout << "Level: " << CustomChar.Level << endl;

  for(int i = 0; i<=5; i++)
  {
    cout<< statNames[i];
    cout << CustomChar.Stats[i] << endl;

  }
  cout << "" << endl;
  cout << "" << endl;
}

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
  displayCC(CharNum);
  writeTofileCC();
return 0;
}
