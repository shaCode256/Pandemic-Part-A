#include "Player.hpp"
#include "Color.hpp"
#include "City.hpp"

//implements the actions a player can do in this pandemic game.

using namespace pandemic;

Player &Player::build()
{
    return *this;
}

Player &Player::discover_cure(Color color)
{
    return *this;
}

Player &Player::drive(City cityTo)
{
    return *this;
}

Player &Player::fly_charter(City cityTo)
{
    return *this;
}

Player &Player::fly_direct(City cityTo)
{
    return *this;
}

Player &Player::fly_shuttle(City cityTo)
{
    return *this;
}

void remove_cures(){

}

std::string Player::role()
{
    return std::string();
}

Player &Player::take_card(City cityTo)
{
    return *this;
}

Player &Player::treat(City cityTo)
{
    return *this;
}