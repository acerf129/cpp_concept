#include <iostream>
#include "dog.cpp"

int main (){
    //Desctructor called when object is passed by value to funciton
    //object return from function 
    //local stack out of scope 
    //heap object is released
    Dog puppy1 ("Fluffy Corgi1","Corgi",3);
    // Dog puppy2 ("Fluffy Corgi2","Corgi",4);
    // Dog puppy3 ("Fluffy Corgi3","Corgi",5);
    // Dog puppy4 ("Fluffy Corgi4","Corgi",6);
    // Dog puppy5 ("Fluffy Corgi5","Corgi",8);
    puppy1.createFunc();
    puppy1.print_info();
    //Using Pointer
    //puppy1.set_dog_name("Sake")->set_dog_breed("Sake Corgi")->set_dog_age(9);
    //Using Reference
    puppy1.set_dog_name("Sake").set_dog_breed("Sake Corgi").set_dog_age(9);

    puppy1.print_info();
    std::cout<< "Done" <<std::endl;
    //Destructor calls like stack 
    return 0;
}