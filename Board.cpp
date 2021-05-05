#include "Board.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <map>
#include <iostream>
#include <cassert>

using namespace pandemic;

namespace pandemic {
int a=3;

int &Board::operator[](City city) {
    return a;
}

std::ostream &operator<<(std::ostream &outStream, Board &board){
    return outStream;
}
};