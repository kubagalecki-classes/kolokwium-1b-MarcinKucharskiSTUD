#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>
using namespace std;

// tutaj klasa Artysta
class Artysta
{
public:
    Artysta() : pseudonim{"Anonim"}, liczba_sluchaczy{0} {};

    Artysta(const string& name, unsigned liczba) : pseudonim{name}, liczba_sluchaczy{liczba} {};
    vitrual void graj(ostream& stream) const { stream << pseudonim << ": " << liczba_sluchaczy; }

    const string& getPseudonim() const { return pseudonim; }
    unsigned      getSluchacze() const { return liczba_sluchaczy; }

private:
    string pseudonim;
    unsigned liczba_sluchaczy;
};
