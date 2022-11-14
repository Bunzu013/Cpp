#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

class Figure
{
private:
    float area;
    float permiter;
public:
    Figure();
    virtual ~Figure();
    float getArea();
    float getPermiter();
    void setArea(float area1);
    void setPermiter(float permiter1);
    virtual void calculateArea()=0;
    virtual void calculatePermiter()=0;
    virtual void show();
};
#endif // FIGURE_H_INCLUDED

