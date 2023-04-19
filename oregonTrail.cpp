#include <iostream>
#include <string>
#include "Character.cpp"
#include "MapRoute.cpp"
using namespace std;

Character playerCharacter;

string toLower(string s){
    for (auto& x : s) {
        x = tolower(x);
    }
    string returnedString = s;
    return returnedString;
}

void gameMenu(){
    string input;
    cout << "╔═══════════════════════════════════╗\n";
    cout << "║         WELCOME TO THE            ║\n";
    cout << "║          OREGON TRAIL             ║\n";
    cout << "║                                   ║\n";
    cout << "║       Do You Want To Play?        ║\n";
    cout << "╚═══════════════════════════════════╝\n\n";
    cout << "[yes/no]> ";
    cin >> input;
    if(toLower(input) == "yes" || toLower(input) == "y"){
        cout << "\nGAME START\n";
    }else if(toLower(input) == "no" || toLower(input) == "n"){
        cout << "BYE BYE";
    }else{
        cout << "Bad Input";
    }
}

void characterCreator(){
    string characterName;
    cout << "\nChoose your character name.\n> ";
    cin >> characterName;
    playerCharacter.setName(characterName);
    
    string characterGender;
    bool genCheck = false;
    while (genCheck == false){
        cout << "\nChoose your character gender.\n[m/f]> ";
        cin >> characterGender;
        if(toLower(characterGender) == "m" || toLower(characterGender) == "male"){
            characterGender = "male";
            genCheck = true;
        }else if(toLower(characterGender) == "f" || toLower(characterGender) == "female"){
            characterGender == "female";
            genCheck = true;
        }else{
            cout << "Please select a valid gender. (In 1800's don't hurt me plz.)";
        }
    }
    playerCharacter.setGender(characterGender);

    int familyMembers;
    bool famCheck = false;
    while (famCheck == false){
        cout << "\nHow many additional family members?\n[0-5]> ";
        cin >> familyMembers;
        if(familyMembers <= 5 && familyMembers >= 0){
            famCheck = true;
        }else{
            cout << "\nPlease enter a number between 0 and 5!\n";
        }
    }
    playerCharacter.setFamilySize(familyMembers);

    string characterProfession;
    bool profCheck = false;
    while(profCheck == false){
        cout << "\nPlease choose a profession\n";
        cout << "[Doctor, Farmer, Mechanic]> ";
        cin >> characterProfession;
        if(toLower(characterProfession) == "doctor"){
            characterProfession = "doctor";
            profCheck = true;
        }else if(toLower(characterProfession) == "farmer"){
            characterProfession = "farmer";
            profCheck = true;
        }else if(toLower(characterProfession) == "mechanic"){
            characterProfession = "mechanic";
            profCheck = true;
        }else{
            cout << "\nPlease enter a valid profession";
        }
    }
    playerCharacter.setProffesion(characterProfession);

    cout << "\nCharacter Created\n";
    cout << "Name: " << playerCharacter.getName() << "\n";
    cout << "Gender: " << playerCharacter.getGender() << "\n";
    cout << "Family Members: " << playerCharacter.getFamilySize() << "\n";
    cout << "Profession: " + playerCharacter.getProfession() << "\n";
    // Profession
}

void gameDead(){
    cout << "╔══════════════╗";
    cout << "║ YOU LOOSE ): ║";
    cout << "╚══════════════╝";
}

void gameWin(){
    cout << "╔══════════════╗";
    cout << "║ YOU WIN !!!! ║";
    cout << "╚══════════════╝";
}

int main(){
    gameMenu();
    characterCreator();
    
    MapRoute gameplay;
    string gameStatus = "active";
    while(gameStatus != "dead" || gameStatus != "win"){
        gameStatus = playerCharacter.getLocation();
    }
    if(gameStatus == "dead"){
        gameDead();
    }else if(gameStatus == "win"){
        gameWin();
    }
}
