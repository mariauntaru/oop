#include "Remorca.hpp"

Remorca::Remorca() : greutate_maxima(0), pret(0), proprietar(NULL)
{
    for (short idx = 0; idx < 3; ++idx)
        dimensiuni[idx] = 0;
}

Remorca::Remorca(const char *p, const int &pt, const int d[3], const int &g) : greutate_maxima(g), pret(pt)
{
    for (short idx = 0; idx < 3; ++idx)
        dimensiuni[idx] = d[idx];
    this->proprietar = new char[std::strlen(p) + 1];
    std::strcpy(this->proprietar, p);
}

Remorca::~Remorca() {}