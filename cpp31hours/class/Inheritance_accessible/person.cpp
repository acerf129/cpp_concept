#include "person.h"

Person::Person(){

}
Person::Person(std::string& firstname_param,std::string& lastname_param)
    :first_name(firstname_param),last_name(lastname_param)
{
}
Person::Person(std::string& fullname,int& age,std::string& address)
    :full_name(fullname),m_age(age),m_address(address)
{
}
std::ostream& operator<<(std::ostream& out,const Person & person){
    if( person.get_full_name()!="None"){
        out<<"Person[ "<<person.get_full_name()<<
        " Age "<<person.m_age<<
        " Address "<<person.get_address()<<" ]";
    }else{
        out<<"Person[ "<<person.get_first_name()<<
        " "<<person.get_last_name()<<" ]";
    }
    
    return out;
}
Person::~Person(){

}