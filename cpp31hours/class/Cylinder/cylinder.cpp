#include "Cylinder.h"
Cylinder::Cylinder(){
    radius=new double;
    *radius=2.0;
    height=2.0;
    std::cout<<"Constructor Cylinder"<<std::endl;
}
Cylinder::Cylinder(double argradius,double argheight){
    radius=new double;
    *radius = argradius;
    height = argheight;
    std::cout<<"Constructor Cylinder"<<std::endl;
}
Cylinder::~Cylinder(){
    delete radius;
    std::cout<<"Destructor Cylinder"<<std::endl;
}
 //functions
double Cylinder::volume(){
    return PI*(*radius)*(*radius)*height;
}
double Cylinder::get_base_radius(){
    return *radius;
}
double Cylinder::get_base_height(){
    return height;
}
void  Cylinder::set_base_radius(double rad_param){
    *radius = rad_param;
}
void  Cylinder::set_base_height(double hei_param){
    height = hei_param;
}    