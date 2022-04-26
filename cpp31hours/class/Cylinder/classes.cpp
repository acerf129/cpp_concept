#include <iostream>
#include "constant.h"
#include "Cylinder.h"
#include "cylinder.cpp"

int main (){
    Cylinder cylinder1(3,8);
    std::cout<<"Cylinder volume1: "<<cylinder1.volume() <<std::endl;
    //change variable 
    Cylinder cylinder2;
    std::cout<<"Cylinder volume2: "<<cylinder2.volume() <<std::endl;
    cylinder2.set_base_radius(6.3);
    cylinder2.set_base_height(4.1);
    std::cout<<"Cylinder volume2: "<<cylinder2.volume() <<std::endl;
    Cylinder* p_cylinder1 =&cylinder1;
    //This work
    //std::cout<<"Pointer Cylinder volume1: "<<(*p_cylinder1).volume() <<std::endl;
    std::cout<<"Pointer Cylinder volume1: "<<p_cylinder1->volume() <<std::endl;

    //Create a cylinder heap object through new operator 
    Cylinder* p_cylinder2 =new Cylinder(100,5); //In Heap
    std::cout<<"Pointer Cylinder volume2: "<<p_cylinder2->volume()<<std::endl;
    std::cout<<"Pointer Cylinder radius2: "<<p_cylinder2->get_base_radius()<<std::endl;
    
    delete  p_cylinder2;

    return 0;
}