#include <string>
using namespace std;

#ifndef _CHARACTER
#define _CHARACTER

class Character
    {
        private:
            string Name;
            string Gender;
            int FamilySize;
            int Money;
            int Location;
            string Proffesion;
            string Supplys;

        public:
            Character();//constructor
            void setName(string nA);
            void setMoney(int mO);
            void setGender(string gN);
            void setFamilySize(int fS);
            void setLocation(int sL);
            void setProffesion(string pF);
            void setSupplys (string sP);
            string getGender();
            string getName();
            int getFamilySize();
            int getMoney();
            int getLocation();
            string getProfession();
            string getSupplys();


};
#endif