#include "Medic.hpp"

using namespace pandemic;

Medic &Medic::treat() {
if (gameBoard.citiesMap[currentCity].diseaseLevel == 0)
    {
        throw std::invalid_argument("This city is already cured.");
    }
    if (gameBoard.citiesMap[currentCity].cure_found == true)
    {
        gameBoard.citiesMap[currentCity].diseaseLevel = 0;
    }
    else
    {
        gameBoard.citiesMap[currentCity].diseaseLevel = 0;
    }
    return *this;
}