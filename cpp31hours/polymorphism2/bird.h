#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include <string_view>
#include "animal.h"
class Bird:public Animal
{

public:
    Bird()=default;
    Bird(const std::string_view & wing_color,const std::string_view description);
    virtual~Bird();
    virtual void fly()const{
        std::cout<<"Bird fly called: "<<m_description<<std::endl;
    };

private:
    std::string_view m_wing_color;
};

#endif