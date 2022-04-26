#include <iostream>
#include "person.cpp"
#include "player.cpp"
#include "nurse.cpp"
int main(){
    //Inheritance Rule
    //Public to public protected(public to protected) private all to private

    //passing not a reference but object
    //Variable
    std::string firstname1{"Michael"};
    std::string lastname1{"Jen"};
    std::string firstname2{"John"};
    std::string lastname2{"Snow"};
    std::string fullname{"John Snow"};
    int ages{24};
    std::string address{"The North Kingdom"};

    Player p1("Basketball");
    std::cout<<"Player1: "<<p1<<std::endl;
    //protected will not work
    //std::cout<<"Player1: "<<p1.full_name<<std::endl;
    
    p1.set_person_name(firstname1,lastname1);
    std::cout<<"Player1 : "<<p1<<std::endl;

    Player p2("Basketball",firstname2,lastname2);
    std::cout<<"Player2 : "<<p2<<std::endl;
    //not accessible outside the derived member function
    //p2.first_name;
    //p2.last_name;

    Person p3(firstname1,lastname1);
    std::cout<<"Person3 : "<<p3<<std::endl;

    Person p4(fullname,ages,address);
    std::cout<<"Person4 : "<<p4<<std::endl;

    Nurse n1;
    std::cout<<"Nurse1 : "<<n1<<std::endl;
    return 0;
}