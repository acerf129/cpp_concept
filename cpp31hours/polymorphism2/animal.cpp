#include "animal.h"

int Animal::animal_count{0};
Animal::Animal(const std::string_view & descriptoin)
    :m_description(descriptoin)
{
    ++animal_count;
}
Animal::~Animal(){
    std::cout<<"Animal Destructor called"<<std::endl;
}