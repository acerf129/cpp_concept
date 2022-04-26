#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer:public  Person
{
    friend std::ostream&operator<<(std::ostream& out, const Engineer& operand);
    private:
        int contract_count{0};
    public :
        Engineer();
        Engineer(std::string_view fullname,int age,std::string_view address,int contract_count_param);
        Engineer(const Engineer& source);
        ~Engineer();

        int get_contract_count(){
            return contract_count;
        }
    
};
#endif