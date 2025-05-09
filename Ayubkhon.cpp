#include <iostream>
#include "Ayubkhon.h"

using namespace std;

Ayubkhon::Ayubkhon(string n)
{
    name = n;
}

void Ayubkhon::setName(string n)
{
    name = n;
}

void Ayubkhon::Print() const
{
    cout << name << endl;
}
