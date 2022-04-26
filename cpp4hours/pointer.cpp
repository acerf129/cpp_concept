#include <iostream>
int main(){
    int age = 19 ;
    int *pAge = &age;
    double gpa =2.7;
    double *pGpa = &gpa;
    string name ="Mike";
    string *pName = &name;
    std::cout<<"AGE Address: "<<pAge<<std::endl;
    std::cout<<"AGE: "<<*pAge<<std::endl;
    std::cout<<"GPA: "<<pGpa<<std::endl;
    std::cout<<"GPA: "<<*&gpa<<std::endl;
    std::cout<<"Name: "<<pName<<std::endl;
    return 0;
}