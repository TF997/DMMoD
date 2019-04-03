#include <iostream>
#include <string>
using namespace std;
int mainMenu()
{
char choice;
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
cout << "[1] Generate Random NPC" << endl;
cout << "Input: ";
cin >> choice;
if(choice == '1')
{

}


return 0;

}
