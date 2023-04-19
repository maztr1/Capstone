#include <cstdlib>
#include "Character.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;
Character::Character()
{
  Name = "";

  Gender = "";

  FamilySize = 0;

  Money = 0;

  Location =0;

  Proffesion ="";

  Supplys="";

}
void Character::setName(string nA)
{
   Name = nA;
}
void Character::setGender(string gN)
{
   Gender = gN;
}
void Character::setFamilySize(int fS)
{
   FamilySize = fS;
}
void Character::setLocation(int sL)
{
   Location = sL;
}
void Character :: setMoney(int mO)
{
   Money = mO;
}
void Character::setProffesion(string pF)
{
   Proffesion = pF;
}
void Character::setSupplys(string sP)
{
   Supplys = sP;
}


string  Character::getGender()
{
  return Gender;
}
int  Character::getLocation()
{
  return Location;
}
int Character::getMoney()
{
  return Money;
}
int  Character::getFamilySize()
{
  return FamilySize;
}
string  Character::getName()
{
  return Name;
}
string Character::getProfession( )
{
  return Proffesion;
}
string Character::getSupplys( )
{
  return Supplys;
}

