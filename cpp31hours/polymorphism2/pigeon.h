#ifndef PIGEON_H
#define PIGEON_H
#include <iostream>
#include <string_view>
#include "bird.h"
class Pigeon:public Bird
{

public:
    Pigeon()=default;
    Pigeon(const std::string_view & wing_color,const std::string_view description);
    virtual~Pigeon();
    virtual void coo()const{
        std::cout<<"Pigeon coo called for pigeon: "<<m_description<<std::endl;
    };
    virtual void breath()const override{
        std::cout<<"Pigeon::breath called for"
        <<m_description<<std::endl;
    }
    virtual void fly()const override{
        std::cout<<"Pigeon fly called: "<<m_description<<std::endl;
    };
    virtual int get_count()const override{
            return animal_count;
        }
    static int animal_count;
};

#endif