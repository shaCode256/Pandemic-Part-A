#pragma once
#include "Player.hpp"

namespace pandemic
{
    class GeneSplicer : public Player
    {
    public:
        GeneSplicer &build();
        GeneSplicer (Board &board, City city) : Player(board, city)
        {
        }
        std::string role()
        {
            return "role";
        }
    };
}