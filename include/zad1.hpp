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

    Artysta(const string& name, unsigned liczba) : pseudonim(name), liczba_sluchaczy(liczba) {};
    void graj(ostream& stream) { stream << pseudonim << "   " << liczba_sluchaczy; }

    string getPseudonim() { return pseudonim; }
    unsigned getliczbasluchaczy() { return liczba_sluchaczy; }

private:
    string pseudonim;
    unsigned liczba_sluchaczy;
};
