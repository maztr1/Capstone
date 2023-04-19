#include <cstdlib>
#include "Encounters.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;
Encounters::Encounters()
{
    River = 0;
    Mountains = 1;
    Accidents = 2;
}

void gamePlay()
{
    string playerChoice;
    bool atRiver;

        cout << "\nYou've Made it to the Missisipi River! Enter 'f' to take a left and go through a field or 'r' to marsh through the missipi! ";
        cin >> playerChoice;
        if(toLower(playerChoice) == "r" || toLower(characterGender) == "Marsh Forward"){
            playerChoice = "River";
            atRiver = true;
        }
        else (toLower(characterGender) == "f" || toLower(characterGender) == "Take a Left!"){
            playerChoice == "Field";
            atRiver = false;
        }

        while (atRiver == true)
        {
            sick rand()%2;
        }
        while (atRiver == false)
        {
            hurt rand()%3;

        }

        bool atMountains;
        cout<<"\nYou've reached the Colorado Rockies do you want to hike over 'h' or walk around 'w' ";
        cin>> playerChoice;
        if(toLower(playerChoice) == "h" || toLower(characterGender) == "Hike Forward")
        {
            playerChoice = "Rockies";
            atMountains = true;
        }
         else (toLower(characterGender) == "w" || toLower(characterGender) == "Take a right!")
         {
            playerChoice == "Field";
            atMountains = false;
        }

        while (atMountains == false)
        {
            hurt rand()%2;
        }
        while

        

        


}
