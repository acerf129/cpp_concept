#include <iostream>
#include "compare.h"
#include <cstring>



int main(){

    double x {24.87};
    double y {57.56};
    //The insight will generate the int type function
    auto result = maximum(x,y);
    std::cout<<result << std::endl;
    result =multiply(x,y);
    std::cout<<result << std::endl;

    //It will compile wrong with compare address
    double *p_x {&x};
    double *p_y {&y};   
    auto results =maximum(p_x,p_y);
    std::cout<<*results << std::endl;

    int a{20};
    int b{70};
    double c{24};
    double d{66};
    std::string  e{"Hello"};
    std::string f{"Kitty"};

    auto maxint = maximum(a,b);
    auto maxdouble = maximum(c,d);
    auto maxstring = maximum(e,f);

    std::cout<<"int max: "<<maxint << std::endl;
    std::cout<<"double max: "<<maxdouble << std::endl;
    std::cout<<"string max: "<<maxstring << std::endl;

    //Customise template
    const char * g{"wild"};
    const char * h{"animal"};
    //auto result3 = maximums(g,h);
    //std::cout<<"result3: "<<result3 << std::endl;
    return 0;
}

