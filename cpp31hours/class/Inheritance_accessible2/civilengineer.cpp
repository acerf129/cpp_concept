#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer(){
    std::cout<<"Default Constructor for CivilEngineer"<<std::endl;
}
CivilEngineer::CivilEngineer(std::string_view fullname,int age,std::string_view address,
int contract_count_param,int specialty_param)
    :Engineer(fullname,age,address,contract_count_param),specialty(specialty_param)
{    
    std::cout<<"Custom Constructor for CivilEngineer"<<std::endl;
}
CivilEngineer::CivilEngineer(const CivilEngineer& source)
    :Engineer(source),specialty(source.specialty)
{
    std::cout<<"Custom Copy Constructor for CivilEngineer called"<<std::endl;
}
std::ostream&operator<<(std::ostream& out,const CivilEngineer& operand){
    out <<"CivilEngineer [ Full Name: "<<operand.get_full_name()<<
    " ,age "<<operand.m_age<<
    " ,address "<<operand.get_address()<<
    " ,specialty "<<operand.specialty<<" ]";
    //out<<"CivilEngineer";
     return out;
}

CivilEngineer::~CivilEngineer(){
    std::cout<<"Desstructor for CivilEngineer"<<std::endl;
}