#include "person.h"
#include "nurse.h"
#include <iostream>

Nurse::Nurse(){

}
std::ostream&operator<<(std::ostream& out,const Nurse& operand){
    out <<"Nurse [ Full Name: "<<operand.get_full_name()<<
    " ,age "<<operand.m_age<<
    " ,address "<<operand.get_address()<<
    " ,practice certificate id "<<operand.practice_certificate_id<<" ]";
    return out;
}

Nurse::~Nurse(){
    
}