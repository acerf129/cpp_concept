#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string_view>
class Shape{
    protected:
        Shape()=default;
        Shape(std::string_view description);
    public :        
        virtual~Shape()=default;//if not public will not be deleted

        //Pure virtual function
        //It will be abstract class
        virtual double perimeter() const=0;
        virtual double surface() const=0;
    static int m_count;
    protected:
        std::string m_description{""};
};
#endif