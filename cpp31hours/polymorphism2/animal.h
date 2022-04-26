#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
#include "stream_insert.h"
class Animal:public StreamInsert
{
private:
    /* data */
public:
    Animal()=default;
    Animal(const std::string_view & descriptoin);
    virtual ~Animal();
    virtual void breath()const{
        std::cout<<"Animal::breath called for"
        <<m_description<<std::endl;
    }
    virtual int get_count()const{
            return animal_count;
        }
    virtual void stream_insert(std::ostream& out )const override{
        out<<"Animal: Insert: "<<m_description<<std::endl;
    };
    static int animal_count;

protected:
    std::string_view m_description;
};

#endif