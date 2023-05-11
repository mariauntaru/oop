#include "Masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca() : masa_totala(0) 
{
    pret = 0;
    proprietar = NULL;
}

Masina_cu_remorca::Masina_cu_remorca(const char *p, const int &pt, const int &m) : masa_totala(m) 
{
    pret = pt;
    this->proprietar = new char[std::strlen(p) + 1];
    std::strcpy(this->proprietar, p);
}

Masina_cu_remorca::~Masina_cu_remorca() {}

Masina_cu_remorca operator+(const Masina_cu_remorca &m1, const Masina_cu_remorca &m2)
{
    return Masina_cu_remorca(NULL, m1.pret + m2.pret, m1.masa_totala + m2.masa_totala);
}

Masina_cu_remorca operator-(const Masina_cu_remorca &m1, const Masina_cu_remorca &m2)
{
    return Masina_cu_remorca(NULL, m1.pret - m2.pret, m1.masa_totala - m2.masa_totala);
}

bool Masina_cu_remorca::operator>(const Masina_cu_remorca &m)
{
    return masa_totala > m.masa_totala;
}

bool Masina_cu_remorca::operator<(const Masina_cu_remorca &m)
{
    return masa_totala < m.masa_totala;
}