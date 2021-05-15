#pragma once
#include "Player.hpp"

namespace pandemic
{
    class Researcher : public Player
    {
    public:
        Researcher &build();
        Researcher (Board &board, City city) : Player(board, city)
        {
        }
        std::string role()
        {
            return "Researcher";
        }
    };
}