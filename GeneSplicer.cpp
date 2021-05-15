#include "GeneSplicer.hpp"

using namespace pandemic;

GeneSplicer &GeneSplicer::discover_cure(Color Color) {
     //if there was already a cure found to this desease (color)
    if (gameBoard.citiesMap[currentCity].cure_found== true)
    {
        return *this;
    }
    else
    {
        if (gameBoard.citiesMap[currentCity].research_lab_exist) //if there's a lab
        {
            int numCards = 0;

            //counting how many cards there are to this player in this color
            std::map<City, int>::iterator iter = cards.begin();
            std::map<City, int>::iterator endIter = cards.end();
            for (; iter != endIter; ++iter)
            {
                City name = iter->first;
                    numCards++;
            }
            //if there are at least 5 cards (NOT only of this color)
            if (numCards - 5 >= 0)
            {
                int toDelete = 5;
                while (toDelete > 0)
                {
                    std::map<City, int>::iterator iter = cards.begin();
                    std::map<City, int>::iterator endIter = cards.end();
                    for (; iter != endIter; ++iter)
                    {
                        City name = iter->first;
                            iter->second = 0; //amount
                            toDelete--;
                    }
                }
                gameBoard.citiesMap[currentCity].diseaseLevel = 0; //cure the desease!
            }
            else
            {
                throw std::invalid_argument("You don't have enough cards of this city");
            }
            return *this;
        }
        return *this;
    }
}