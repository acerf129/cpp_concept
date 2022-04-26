#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string_view>
#include "oval.h"
class Circle :public Oval{
    public :
        Circle()=default;
        Circle(double radius,
        std::string_view source);
        ~Circle();

        void draw()const override{
            std::cout<<"Circle draw() called. Drawing . "
            <<m_description
            <<" radius : "<<get_x_radius()
            <<std::endl;
        };
        virtual void draw(int color_depth)const override{
            std::cout<<"Circle Drawing with color_depth: "<<color_depth<<std::endl;
        };
};
#endif