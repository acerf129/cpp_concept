#include <iostream>

class Dog{
    public :
        Dog()=default;
    
    private:
        size_t leg_count;//8
        size_t arm_count;//8
        size_t arm_count2;//8
        int * p_age;//8
};

int main(){
    Dog dog1;
    //class size = sum variable
    std::cout<< "size of size_t : "<<sizeof(size_t) <<std::endl;
    std::cout<< "size of int* : "<<sizeof(int*) <<std::endl;
    std::cout<< "size of dog1 : "<<sizeof(dog1) <<std::endl;
    std::string name{"I am the king of universe!!!!!!"};//24
    //string only pointing to pointer
    std::cout<< "size of name : "<<sizeof(name) <<std::endl;

    return 0;
}