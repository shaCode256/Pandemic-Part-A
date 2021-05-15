#include "Board.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <map>
#include <iostream>
#include <cassert>

namespace pandemic
{
    class CityClass
    {
    public:
        City name;
        int diseaseLevel;
        Color color;
        bool cure_found;
        bool research_lab_exist;
        CityClass(){}; // in Rectangle.h

    CityClass(City name_){
        name= name_;
    }
        // friend std::ostream &operator<<(std::ostream &outStream, pandemic::Board &board){
        //    return outStream; 
        // };
    };
};