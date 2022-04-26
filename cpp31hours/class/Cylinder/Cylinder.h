#ifndef CYLINDER_H
#define CYLINDER_H
#include "constant.h"
class Cylinder
{
private:
    //Member Variable
    double* radius{nullptr};
    double height{1};
public:   
    //Constructor
    //Default Constructor
    //Cylinder()=default;
    Cylinder();
    //Constructor
    Cylinder(double argradius,double argheight);
    //Destructor
    ~Cylinder();
    //function
    double volume();
    //Setter and Getter
    double get_base_radius();
    double get_base_height();
    void  set_base_radius(double rad_param);  
    void  set_base_height(double hei_param);
    //2131
};
#endif