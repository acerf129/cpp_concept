#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H
#include "engineer.h"
//All Thing private to this class
class CivilEngineer:public Engineer
{
    friend std::ostream&operator<<(std::ostream& out, const CivilEngineer& operand);

    public :
        CivilEngineer();
        ~CivilEngineer();
        void buildroad(){
            //All Unaccessiible from Person but (public or protected from engineer)
            //full_name ="John Snow";
            //m_age = 24;
            //m_address="The North Kingdom"; It was private to base class
        }
    private:
        int specialty{0};
    
};
#endif