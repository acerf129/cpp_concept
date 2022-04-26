#include "bird.h"

Bird::Bird(const std::string_view & wing_color,const std::string_view description)
    :Animal(description),m_wing_color(wing_color)
{
}
Bird::~Bird(){
    
}