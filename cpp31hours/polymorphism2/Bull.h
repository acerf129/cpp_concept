#ifndef BULL_H
#define BULL_H
#include <iostream>
#include <string_view>
#include "dog.h"
class Bull:public Dog
{

public:
    Bull()=default;
    virtual~Bull();

    //final is the last method
    //Can't Inherit final one   
    //Compile Error
    // virtual void run()const override {
    //     std::cout<<"Bull is running"<<std::endl;
    // };
};

#endif