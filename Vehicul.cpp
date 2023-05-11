#include <Vehicul.hpp>

Vehicul::Vehicul() : proprietar(NULL), pret(0) {}

Vehicul::Vehicul(const char *p, const int &pt) : pret(pt)
{
    proprietar = new char[std::strlen(p) + 1];
    std::strcpy(proprietar, p);
}

Vehicul::~Vehicul()
{
    delete[] proprietar;
}