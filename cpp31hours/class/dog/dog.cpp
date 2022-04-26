#include "dog.h"

Dog::Dog()=default;
Dog::Dog(std::string_view name_param,std::string_view  breed_param,int p_age_param){
    name = name_param;
    breed=breed_param;
    p_age= new int;
    *p_age=p_age_param;
    std::cout<<"Dog Constructor called for : "<<name<<"at "<<this<<std::endl;
};
Dog::~Dog(){
    //it's part of class,access to the private variable
    delete  p_age;
    std::cout<<"Dog Destructor called for : "<<name<<"at "<<this<<std::endl;
}
void Dog::createFunc(){
    Dog* mydogs =new Dog("Fluffy~","Corgi",7);//mydogs  in stack  
    delete mydogs;
}
void Dog::print_info(){
    std::cout<<"Dog : ("<<this<<") name: "<<name<<"  breed: "<<breed<<
    "  age "<<*p_age <<std::endl;
}
/*Dog* Dog::set_dog_name(std::string_view name){
    this->name=name;
    return this;
}
Dog* Dog::set_dog_breed(std::string_view breed){
    this->breed=breed;
    return this;
}
Dog* Dog::set_dog_age(int age){
    *this->p_age=age;
    return this;
}*/
Dog& Dog::set_dog_name(std::string_view name){
    this->name=name;
    return *this;
}
Dog& Dog::set_dog_breed(std::string_view breed){
    this->breed=breed;
    return *this;
}
Dog& Dog::set_dog_age(int age){
    *this->p_age=age;
    return *this;
}