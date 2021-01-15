#pragma once

#include "zad1.hpp"

#include <cctype>


using namespace std;
// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste

class PopGwiazda : public Artysta
{
public:
    PopGwiazda(const string& name, unsigned liczba) : Artysta(name, liczba) {}

    void graj(ostream& stream) const override { stream << "PopGwiazda: " << getPseudonim(); }
private:

};

class RapGwiazda : public Artysta
{
public:

    RapGwiazda(const string& name, unsigned liczba) : Artysta(name, liczba) {}

    void graj(ostream& stream) const override  { stream << "RapGwiazda: " << getPseudonim(); }
private:
}; 


Artysta* stworzArtyste(const string& name)
{
    if (name.front() == std::toupper(name.front()))
        return new PopGwiazda{"BTS", 1234};
    else
        return new RapGwiazda{"Ye", 4321};
};
