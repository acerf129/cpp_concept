#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string_view>
class Shape{
    public :
        Shape()=default;
        //for parameter
        //Shape(const std::string &)
        Shape(std::string_view source);
        ~Shape();

        virtual void draw()const { 
            std::cout<<"Shape draw() called. Drawing "<<m_description<<std::endl;
        };
        virtual void draw(int color_depth)const{
            std::cout<<"Shape Drawing with color_depth: "<<color_depth<<std::endl;
        };
        virtual int get_count()const{
            return m_count;
        }
    static int m_count;
    protected:
        std::string m_description{""};
};
#endif