#pragma once
#include "Player.hpp"

namespace pandemic
{
    class Virologist : public Player
    {
    public:
        Virologist &build();
        Virologist(Board &board, City city) : Player(board, city)
        {
        }
        std::string role()
        {
            return "role";
        }
    };
}