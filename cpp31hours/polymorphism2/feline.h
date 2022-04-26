#ifndef FELINE_H
#define FELINE_H
#include <iostream>
#include <string_view>
#include "animal.h"
class Feline:public Animal
{

public:
    Feline()=default;
    Feline(const std::string_view & fur_style,const std::string_view description);
    virtual~Feline();
    virtual void run()const{
        std::cout<<"Feline "
        <<m_description<<"is running"<<std::endl;
    };
    void feline_move(){
        std::cout<<"Feline is thingy."<<std::endl;
    }
    virtual void stream_insert(std::ostream& out )const override{
        out<<"Feline: Insert: "<<m_description<<std::endl;
    };
    std::string_view m_fur_style;
};

#endif