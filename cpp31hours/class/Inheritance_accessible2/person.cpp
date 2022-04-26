#include "person.h"

Person::Person(){
    std::cout<<"Default Constructor for Person"<<std::endl;
}
Person::Person(std::string_view firstname_param,std::string_view lastname_param)
    :first_name(firstname_param),last_name(lastname_param)
{
}
Person::Person(std::string_view fullname,int age,std::string_view address)
    :full_name(fullname),m_age(age),m_address(address)
{
    std::cout<<"Custom Constructor for Person"<<std::endl;
}
//need reference
Person::Person(const Person&source)
    : full_name(source.full_name),m_age(source.m_age),
    m_address(source.m_address)
{
     std::cout<<"Custom Copy Constructor for Person called"<<std::endl;
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
    std::cout<<"Desstructor for Person"<<std::endl;
}