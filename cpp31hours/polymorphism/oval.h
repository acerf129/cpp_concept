#ifndef OVAL_H
#define OVAL_H
#include <iostream>
#include <string_view>
#include "shape.h"
class Oval :public Shape{
    public :
        Oval()=default;
        Oval(double x_radius,double y_radius,
        std::string_view source);
        ~Oval();

        //override will check the function is override or not 
        // all the other overloads functions will be hidden 
        virtual void draw() const override{
            std::cout<<"Oval draw() called. Drawing "
            <<m_description
            <<" m_x_radius : "<<m_x_radius
            <<" m_y_radius : "<<m_y_radius
            <<std::endl;
        }
        virtual void draw(int color_depth)const override{
            std::cout<<"Oval Drawing with color_depth: "<<color_depth<<std::endl;
        };
        virtual void draw(int color_depth ,std::string_view color )const  {
            std::cout<<"Oval Drawing with color_depth: "<<color_depth
            <<" and color: "<<color<<std::endl;
        };
        
    protected:
        double get_x_radius() const{
            return m_x_radius;
        }
        double get_y_radius() const{
            return m_y_radius;
        }
    private :
        double m_x_radius{0.0};
        double m_y_radius{0.0};
};
#endif