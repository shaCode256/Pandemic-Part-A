#include "Player.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
#include <stdexcept>
// #define ENUM_TO_STR(ENUM) std::string(#ENUM)
//implements the actions a player can do in this pandemic game.

using namespace pandemic;

Player &Player::build()
{
    if (gameBoard.citiesMap[currentCity].research_lab_exist == true)
    {
        return *this;
    }
    else
    {
        if (cards[currentCity] == 1)
        {
            cards[currentCity] = 0;
            gameBoard.citiesMap[currentCity].research_lab_exist = true;
        }
        else
        {
            throw std::invalid_argument("You don't have enough cards of this city");
            ;
        }
    }
    return *this;
}

Player &Player::discover_cure(Color color)
{
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
                if (gameBoard.citiesMap[name].color == color)
                {
                    numCards++;
                }
            }
            //if there are at least 5 cards of this color
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
                        if (gameBoard.citiesMap[name].color == color)
                        {
                            iter->second = 0; //amount
                            toDelete--;
                        }
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

Player &Player::drive(City cityTo)
{
    // std::string cityString = ENUM_TO_STR(cityTo);
    if(gameBoard.cities_connections[currentCity].find(cityTo)!=gameBoard.cities_connections[currentCity].end()){
        currentCity= cityTo;
    }
    else{
        throw std::invalid_argument("you can't drive to this city. it's not connected to you");
    }
    return *this;
}

Player &Player::fly_charter(City cityTo)
{
    if (cards[currentCity] == 1)
    {
        cards[currentCity] = 0;
        currentCity = cityTo;
    }
    return *this;
}

Player &Player::fly_direct(City cityTo)
{
    if (cards[cityTo] == 1)
    {
        cards[cityTo] = 0;
        currentCity = cityTo;
    }
    return *this;
}

Player &Player::fly_shuttle(City cityTo)
{
    if(gameBoard.citiesMap[currentCity].research_lab_exist && gameBoard.citiesMap[cityTo].research_lab_exist ){
        currentCity = cityTo;
    }
    else{
        throw std::invalid_argument("you can't shuttle fly to this city. at least one of the cities (yours and the desired one) doesn't have a lab");
    }
    return *this;
}

std::string Player::role()
{
    return "template";
}

Player &Player::take_card(City city)
{
    cards[city] = 1;
    return *this;
}

Player &Player::treat(City cityTo)
{
    if (gameBoard.citiesMap[currentCity].diseaseLevel == 0)
    {
        throw std::invalid_argument("This city is already cured.");
        ;
    }
    if (gameBoard.citiesMap[currentCity].cure_found == true)
    {
        gameBoard.citiesMap[currentCity].diseaseLevel = 0;
        return *this;
    }
    else
    {
        gameBoard.citiesMap[currentCity].diseaseLevel -= 1;
    }
    return *this;
}