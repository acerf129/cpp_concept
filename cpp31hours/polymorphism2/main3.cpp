#include <iostream>
#include <memory.h>
#include "stream_insert.cpp"
#include "dog.cpp"
#include "cat.cpp"
#include "animal.cpp"
#include "feline.cpp"
int main(){
    
    std::unique_ptr<Animal> animal1 =std::make_unique<Dog>("stripes","dog1");
    std::shared_ptr<Animal> animals[]{
        std::make_shared<Dog>("stripes","dog2"),
        std::make_shared<Cat>("black","Cat2"),
        std::make_shared<Feline>("white","Feline2")
    };
    std::cout <<*animal1 <<std::endl;
    std::cout <<"Printing out animals" <<std::endl;
    for ( const auto a : animals ){
        std::cout<<*a <<std::endl;
    }
    return 0;
}
