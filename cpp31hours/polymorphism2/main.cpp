#include <iostream>
#include "animal.cpp"
#include "feline.cpp"
#include "dog.cpp"
#include "cat.cpp"
#include "bird.cpp"
#include "pigeon.cpp"
#include "crow.cpp"
#include "Bull.cpp"

int main (){

    Dog dog1("brown white ","dog1");
    Cat cat1("dark black ","cat1");
    Pigeon pigeon1("white blue ","pigeon1");
    Crow crow1("grey ","crow1");

    Animal* animals[]{&dog1,&cat1,&pigeon1,&crow1};
    for (auto i : animals){
        i->breath();
    }
    std::cout<<"==============="<<std::endl;
    //Feline
    Dog dog2("brown white ","dog1");
    Cat cat2("dark black ","cat1");
    cat2.run();
    Feline* felines[]{&dog1,&cat1};
    for (auto feline : felines){
        feline->run();
    }
    std::cout<<"==============="<<std::endl;
    //Bird
    Pigeon pigeon2("white blue ","pigeon1");
    Crow crow2("grey ","crow1");
    Bird* birds[]{&pigeon2,&crow2};
    for (auto bird : birds){
        bird->fly();
    }
    Animal A1;
    std::cout<<"Animal Count: "<<A1.get_count()<<std::endl;
    std::cout<<"Pigeon Count: "<<pigeon2.get_count()<<std::endl;

    Bull bull1;

    Animal* p_animal =new Dog();
    //Remember to virtual destructor
    //delete p_animal;

    return 0;
}