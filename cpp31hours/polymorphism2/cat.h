#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string_view>
#include "feline.h"
class Cat:public Feline
{

public:
    Cat()=default;
    Cat(const std::string_view & fur_style,const std::string_view description);
    virtual~Cat();
    virtual void miaw()const{
        std::cout<<"Cat miaw called "
        <<" miaw!"<<std::endl;
    };
    virtual void breath()const override{
        std::cout<<"Cat::breath called for"
        <<m_description<<std::endl;
    }
    virtual void run()const override{
        std::cout<<"Cat "
        <<m_description<<" is running"<<std::endl;
    };
    virtual void stream_insert(std::ostream& out )const override{
        out<<"Cat: Insert: "<<m_description<<"  furStyle: "<<m_fur_style<<std::endl;
    };
};

#endif