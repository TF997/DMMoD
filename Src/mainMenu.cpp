#include <iostream>
#include <string>
using namespace std;
int mainMenu()
{
int choice;
string titleCard = R"(
  ______   _______    _______  _______  ______
 (  __  \ (       )  (       )(  ___  )(  __  \
 | (  \  )| () () |  | () () || (   ) || (  \  )
 | |   ) || || || |  | || || || |   | || |   ) |
 | |   | || |(_)| |  | |(_)| || |   | || |   | |
 | |   ) || |   | |  | |   | || |   | || |   ) |
 | (__/  )| )   ( |  | )   ( || (___) || (__/  )
 (______/ |/     \|  |/     \|(_______)(______/

 )";
cout << titleCard << endl;
cout << "[1] Generate Random NPC(s) {all with the same level}" << endl;
cout << "[2] Generate Random NPC(s) {all with different chosen levels}" << endl;
cout << "[3] Generate Random NPC(s) {all with different random levels}" << endl;
cout << "[4] Generate Random NPC(s) {all with level bounds}" << endl;
cout << "[5] Create Custom Character (stats auto rolled)" << endl;
cout << "[6+] Exit" << endl;
cout << "Input: ";
cin >> choice;
return choice;
}
