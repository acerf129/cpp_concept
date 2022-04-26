#include <iostream>
#include <string_view>
class Dog{
    private :
    std::string name;
    std::string breed;
    int *p_age{nullptr};

    public:
    //Constructor
    Dog();
    Dog(std::string_view name_param,std::string_view  breed_param,int p_age_param); 
    ~Dog();
    //function
    void print_info();
    void createFunc();
    /*Dog* set_dog_name(std::string_view name);
    Dog* set_dog_breed(std::string_view breed);
    Dog* set_dog_age(int age);
    */
    Dog& set_dog_name(std::string_view name);
    Dog& set_dog_breed(std::string_view breed);
    Dog& set_dog_age(int age);
};