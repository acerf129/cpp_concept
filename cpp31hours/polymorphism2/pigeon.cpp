#include "pigeon.h"

int Pigeon::animal_count{0};
Pigeon::Pigeon(const std::string_view & wing_color,const std::string_view description)
    :Bird(wing_color,description)
{
    ++animal_count;
}
Pigeon::~Pigeon(){
    
}