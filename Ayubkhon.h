#ifndef AYUBKHON_H
#define AYUBKHON_H

#include <iostream>
#include "Name.h"

using namespace std;

class Ayubkhon : public Name
{
    public:
        Ayubkhon(string = "DefaultName");
        virtual void setName(string);
        void Print() const;

    private:
        string name;
};

#endif