#ifndef CORW_H
#define CORW_H
#include <iostream>
#include <string_view>
#include "bird.h"
class Crow:public Bird
{

public:
    Crow()=default;
    Crow(const std::string_view & wing_color,const std::string_view description);
    virtual~Crow();
    virtual void cow()const{
        std::cout<<"Crow coo called for crow: "<<m_description<<std::endl;
    };
    virtual void breath()const override{
        std::cout<<"Crow::breath called for"
        <<m_description<<std::endl;
    }
    virtual void fly()const override{
        std::cout<<"Crow fly called: "<<m_description<<std::endl;
    };
    
};

#endif