#include <iostream>
#include "person.h"

double weight{};

//function prototype before main
double add(double a ,double b);
int add(int a ,int b);
struct Point{
    double m_x{};
    double m_y{};
    Point(double x ,double y){
        m_x=x;
        m_y=y;
    }
}; 
//Compile Error one definition rule 

int main(){
    Point p1(20.66,32.56);
    weight = add(10.5,33.7);
    std::cout<<weight<<std::endl;
    std::cout<<"p1.x "<<p1.m_x<<"  p1.y "<<p1.m_y<<std::endl;
    Person person1("John Snow",35,2);
    person1.print_info();
    std::cout<<std::max(11.56,23.7)<<std::endl;

    char n {66};
    char g {57};

    std::cout<< std::min(static_cast<int>(n),static_cast<int>(g))  <<std::endl;
    std::cout<<static_cast<int>(n) <<std::endl;
    return 0 ;
}
double add(double a ,double b){
    return a+b;
}
int add(int a ,int b){
    return a+b;
}

