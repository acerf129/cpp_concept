#include "person.h"
#include "player.h"

Player::Player(std::string_view  game_param)
    :m_game(game_param)
{
}
Player::Player(std::string_view  game_param,std::string_view firstname
    ,std::string_view lastname){
    m_game=game_param;
    first_name=firstname;
    last_name=lastname;
}
;
std::ostream&operator <<(std::ostream&out ,const Player& player){
    out<<"Player : [ game: "<<player.m_game
    <<" names : "<<player.get_first_name()
    <<"  "<<player.get_last_name()<<" ]";
    return out;
}
Player::~Player(){
    
}