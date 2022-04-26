#include <iostream>
#include "shape.cpp"
#include "Rectangle.cpp"

int main(){
    //It's a abstract class now
    //Shape * shape_ptr=new Shape;//With compile error
    //Derived class must override all abstract funcitons
    Shape * shape_ptr=new Rectangle(10,25,"rect1");
    double surface = shape_ptr->surface();
    std::cout <<"Dynamic Type of shape_rect :"<<typeid(*shape_ptr).name()<<std::endl;
    std::cout <<"Surface rect1 :"<<surface<<std::endl;
    std::cout <<"====================="<<std::endl;

    //Interface with abstract class and no member variable
    return 0;
}