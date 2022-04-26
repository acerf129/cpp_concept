#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <string_view>
class Person
{
    friend std::ostream& operator<<(std::ostream& out ,const Person& person);

    //private    
    private:
        std::string m_address{"None"};
    //protected can be used in derived class
    protected:
        std::string first_name{"Mysterious"};
        std::string last_name{"Person"};
        int  m_age {25};
    public :
        std::string full_name{"None"}; 
    
    public:
        Person();
        Person(std::string_view fullname,std::string_view lastname_param);
        Person(std::string_view fullname,int age,std::string_view address);
        Person(const Person&source);
        ~Person();

        //Getter
        std::string get_first_name() const{
            return first_name;
        }
        std::string get_last_name() const{
            return last_name;
        }
        std::string get_address()const{
            return m_address;
        }
        std::string get_full_name()const{
            return full_name;
        }
        //Setter
        void set_person_name(std::string& first_param,std::string& last_param){
            first_name = first_param;
            last_name = last_param;
        }
};
#endif