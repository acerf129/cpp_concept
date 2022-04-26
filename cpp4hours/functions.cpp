#include <iostream>
#include <cmath>

//before main function

void sayHi(string name);

double cube(double num){
    return pow(num,3) ; 
}

int main ()
{
    double cubes = cube(5.2);
    std::cout << "Cubes Value" << cubes << std::endl;


    bool isMale =false;
    bool isTall =true;
    if(isMale && isTall){
        std::cout << "You are a tall male";
    }else if (!isMale && isTall){
        std::cout<< "You are a tall woman" <<std::endl;
    }
    //std::cout << "Top"<<std::endl ; 
    //sayHi("Jen");
    return 0 ;
} 
void sayHi(string name){
     std::cout << "Hello " << name;
}