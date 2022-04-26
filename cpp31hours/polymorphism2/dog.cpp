#include "dog.h"

Dog::Dog(const std::string_view & fur_style,const std::string_view description)
    :Feline(fur_style,description)
{
    std::cout<<"Dog Constructor called"<<std::endl;
}
Dog::~Dog(){
    std::cout<<"Dog Destructor called"<<std::endl;
}