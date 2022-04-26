#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer(){

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
    
}