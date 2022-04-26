#ifndef NEUSE_H
#define NEUSE_H
#include "person.h"
class Nurse:protected Person
{
    friend std::ostream&operator<<(std::ostream& out, const Nurse& operand);

    public :
        Nurse();
        ~Nurse();
        void treat_unwell_person(){
            full_name ="John Snow";
            m_age = 24;
            //
            //m_address="The North Kingdom"; Compile Error Private from Person
        }
    private:
        int practice_certificate_id{0};
    
};
#endif