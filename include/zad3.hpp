#pragma once

#include "zad1.hpp"
using namespace std;
//tutaj szablon ArtystaPlusInstrument


template < typename T >
class ArtystaPlusInstrument
{
public:
    ArtystaPlusInstrument(const Artysta& artysta, const T& instrument) : a(artysta), i(instrument) {}

    unsigned koncert() { return i(a); }

private:
    Artysta a;
    T       i;
};