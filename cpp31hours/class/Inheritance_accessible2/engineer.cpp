#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer(){
    std::cout<<"Default Constructor for Engineer"<<std::endl;
}
Engineer::Engineer(std::string_view fullname,int age,std::string_view address,int contract_count_param)
    :Person(fullname,age,address),contract_count(contract_count_param)
{
    std::cout<<"Custom Constructor for Engineer"<<std::endl;
}

//use for copy constructor
// Engineer::Engineer(const Engineer& source)
//     :Person(source.full_name,source.m_age,source.get_address()),contract_count(source.contract_count)
// {
//     std::cout<<"Custom Copy Constructor for Engineer called"<<std::endl;
// }

//Put the source only copy the person part to contruct
Engineer::Engineer(const Engineer& source)
    :Person(source),contract_count(source.contract_count)
{
    std::cout<<"Custom Copy Constructor for Engineer called"<<std::endl;
}

std::ostream&operator<<(std::ostream& out,const Engineer& operand){
    out <<"Engineer [ Full Name: "<<operand.get_full_name()<<
    " ,age "<<operand.m_age<<
    " ,address "<<operand.get_address()<<
    " ,practice certificate id "<<operand.contract_count<<" ]";
    return out;
}

Engineer::~Engineer(){
    std::cout<<"Desstructor for Engineer"<<std::endl;
}