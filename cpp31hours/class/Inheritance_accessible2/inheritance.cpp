#include <iostream>
#include "person.cpp"
#include "engineer.cpp"
#include "civilengineer.cpp"
int main(){
    // CivilEngineer civil1;
    // Person p1 ("John Snow",27,"Winterfell Cold Castle");
    // std::cout<<"Person : "<<p1<<std::endl;
    //  std::cout<<"================"<<std::endl;
    // Engineer e1 ("John Snow",27,"Winterfell Cold Castle",2);
    // std::cout<<"Engineer : "<<e1<<std::endl;
    // std::cout<<"================"<<std::endl;
    // CivilEngineer c1 ("John Snow",27,"Winterfell Cold Castle",2,3);
    // std::cout<<"CivilEngineer : "<<c1<<std::endl;


    // Copy of the Constructor
    // Engineer e2("John Snow",27,"Winterfell Cold Castle",2);
    // Engineer e3(e2);
    // std::cout<<"Engineer3 : "<<e3<<std::endl;
    std::cout<<"================"<<std::endl;

    CivilEngineer c2 ("John Snow",27,"Winterfell Cold Castle",2,3);
    // CivilEngineer c3(c2);
    std::cout<<"CivilEngineer : "<<c2<<std::endl;
    //Start from basic to specialized one 
    return 0;
}