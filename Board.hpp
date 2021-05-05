#pragma once
#include <string>
#include <stdexcept>
#include <map>
#include <iostream>
#include <cassert>
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Board
    {
    private:
        std::map<std::string, pandemic::City> citiesMap;

    public:
        friend std::ostream &operator<<(std::ostream &outStream, Board &board);
        int& operator[](City city);
        bool is_clean()
        {
            return true;
        }
    };

}