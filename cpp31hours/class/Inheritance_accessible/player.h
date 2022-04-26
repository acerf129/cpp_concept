#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string_view>
#include "person.h"

class Player:public  Person{

    friend std::ostream& operator<<(std::ostream &out ,const Player&player);
    
    private:
        std::string m_game{"None"};
    
    public:
        Player()=default;
        Player(std::string_view game_param);
        Player(std::string_view  game_param,std::string_view firstname,std::string_view lastname);
        ~Player();

};

#endif