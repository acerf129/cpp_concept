#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string_view>
#include "feline.h"
class Dog:public Feline
{

public:
    Dog()=default;
    Dog(const std::string_view & fur_style,const std::string_view description);
    virtual~Dog();
    virtual void bark()const{
        std::cout<<"Dog bark called "
        <<" woof!"<<std::endl;
    };
    virtual void breath()const override{
        std::cout<<"Dog::breath called for"
        <<m_description<<std::endl;
    }
    //final is the last method
    void run()const override final{
        std::cout<<"Dog "
        <<m_description<<" is running"<<std::endl;
    };
    virtual void stream_insert(std::ostream& out )const override{
        out<<"Dog: Insert: "<<m_description<<"  furStyle: "<<m_fur_style<<std::endl;
    };
};

#endif