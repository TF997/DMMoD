#ifndef OpC_H
#define OpC_H

using namespace std;

class Options
{
    public:
      int selectLevel;
      int setLevel;
      int loopCount;
      int llbound = 0;
      int hlbound = 0;

        void configureBasedOnChoice(int choice)
        {
            switch(choice)
            {
              case -1:
                    selectLevel = -1;
                    loopCount = 0;
                    setLevel = 1;
                    loopCount = 1;
                    break;
                case 1:
                      selectLevel = 1;
                      loopCount = 0;
                      cout << "Level of NPCs: (Max 20) ";
                      cin >> setLevel;
                      cout << "How many NPCs would you like to create?: ";
                      cin >> loopCount;
                      break;
                  case 2:
                      selectLevel = 2;
                      loopCount = 0;
                      cout << "How many NPCs would you like to create?: ";
                      cin >> loopCount;
                      break;
                  case 3:
                      selectLevel = 3;
                      loopCount = 0;
                      cout << "How many NPCs would you like to create?: ";
                      cin >> loopCount;
                      break;
                  case 4:
                      selectLevel = 4;
                      loopCount = 0;
                      cout << "Lower Level Bound: " << endl;
                      cin >> llbound;
                      cout << "Higer Level Bound: " << endl;
                      cin >> hlbound;
                      cout << "How many NPCs would you like to create?: ";
                      cin >> loopCount;
                      break;

            }
        }
   };

#endif
