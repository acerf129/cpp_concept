#include <iostream>
#include "dog.cpp"
#include "animal.cpp"
#include "feline.cpp"
int main(){
    //In inherit heicharchy
    //Dynamic Cast can use to the derived class method
    //Never call virtual function in constructor
    // or destructor
    Animal* animal1 =new Feline("Stripes","feline1");
    //animal1->feline_move();
    std::cout<<"------"<<std::endl;

    Feline * feline1 = dynamic_cast<Feline*>(animal1);
    if (feline1){
        feline1->feline_move();
    }else{
        std::cout<<"Couldn't do the transformation from animal to dog"<<std::endl;
    }
    Feline feline_ref ("Stripes","feline1");
    Animal& aninmal2 =  feline_ref;
    Feline& feline2 {dynamic_cast<Feline&>(aninmal2)};
    feline2.feline_move();
    
    return 0;
}
