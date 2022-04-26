#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"
//All Thing private to this class
class Engineer:private Person
{
    friend std::ostream&operator<<(std::ostream& out, const Engineer& operand);
    private:
        int contract_count{0};
    public :
        Engineer();
        ~Engineer();
        void buildsomething(){
            full_name ="John Snow";
            m_age = 24;
            //m_address="The North Kingdom"; It was private to base class
        }
        int get_contract_count(){
            return contract_count;
        }
    protected:
    //resurrect the accessible
        using Person::get_first_name;
        using Person::get_address;
        using Person::get_last_name;
        using Person::get_full_name;
        using Person::m_age;
        //Private member can't resurrect
        //using Person::m_address;
    
};
#endif