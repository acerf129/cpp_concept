#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H
#include "engineer.h"
//All Thing private to this class
class CivilEngineer:public Engineer
{
    friend std::ostream&operator<<(std::ostream& out, const CivilEngineer& operand);

    public :
        CivilEngineer();
        CivilEngineer(std::string_view fullname,int age,std::string_view address,
        int contract_count_param,int specialty_param);
        CivilEngineer(const CivilEngineer& source);
        ~CivilEngineer();
        void buildroad(){
          
        }
    private:
        int specialty{0};
    
};
#endif