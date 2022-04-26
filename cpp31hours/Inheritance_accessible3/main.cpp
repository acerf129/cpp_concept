#include <iostream>
#include "child.h"
int main(){

    //It will override var and function automatically.
    Child child(112);
    child.print_var();
    child.Parent::print_var();
    std::cout<<"============="<<std::endl;
    child.show_values();
    return 0;
}