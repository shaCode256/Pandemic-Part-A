#pragma once
#include "Player.hpp"

using namespace std;
namespace pandemic
{
    class Medic : public Player
    {
    public:
        Medic &treat();
        Medic (Board &board, City city) : Player(board, city)
        {
        }
        std::string role()
        {
            return "role";
        }
    };
}