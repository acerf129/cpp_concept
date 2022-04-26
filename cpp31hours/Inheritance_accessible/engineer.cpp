#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer(){

}
std::ostream&operator<<(std::ostream& out,const Engineer& operand){
    out <<"Engineer [ Full Name: "<<operand.get_full_name()<<
    " ,age "<<operand.m_age<<
    " ,address "<<operand.get_address()<<
    " ,practice certificate id "<<operand.contract_count<<" ]";
    return out;
}

Engineer::~Engineer(){
    
}