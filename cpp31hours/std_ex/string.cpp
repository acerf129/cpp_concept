#include <iostream>
#include <string>

int main(){
    std::string full_name;
    std::string message{"Hello there",5};
    //Contains 5 chars

    std::string weird_message(4,'e');
    std::string sayhi{"Hello there"};
    std::string greeing{sayhi,6, 5};
    std::cout<<" message: "<<message<<std::endl;
    std::cout<<" weird_message: "<<weird_message<<std::endl;
    std::cout<<" sayhi: "<<sayhi<<std::endl;
    std::cout<<" greeing: "<<greeing<<std::endl;
    return 0;
}