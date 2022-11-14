#ifndef MAXBUFOR_H_INCLUDED
#define MAXBUFOR_H_INCLUDED
#include "Bufor.h"

class MaxBufor: public Bufor
{
public:
    MaxBufor();
    MaxBufor(int size1);
    ~MaxBufor();
    virtual void add(int value) override;
    virtual  double calculate() override;
};

#endif // MAXBUFOR_H_INCLUDED
