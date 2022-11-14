#ifndef BUFOR_H_INCLUDED
#define BUFOR_H_INCLUDED

class Bufor
{
private:
    int* tab;
    int sizeT;
    int index;
public:
    Bufor();
    Bufor(int size1);
    virtual ~Bufor();
    virtual void add(int value);
    virtual  double calculate()=0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirst();
    void setFirst(int value);
    void setTab(int pos, int value);
    void show();

};

#endif // BUFOR_H_INCLUDED
