#pragma once
#include "Player.hpp"

namespace pandemic
{
    class Scientist : public Player
    {
        private:
        int CardsToCure=0;
    public:
        Scientist &build();
        Scientist (Board &board, City city, int numCardsToCure) : Player(board, city)
        {
            CardsToCure= numCardsToCure;
        }
        std::string role()
        {
            return "role";
        }
    };
}