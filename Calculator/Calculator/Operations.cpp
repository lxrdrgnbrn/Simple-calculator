#include "Operations.h"
#include "math.h"

Operations::Operations()
{
    x=0;
    y=0;
}

void Operations::setX(double _x)
{
    x=_x;
}
void Operations::setY(double _y)
{
    y=_y;
}


double Operations::getX()const
{
    return x;
}
double Operations::getY()const
{
    return y;
}

double Operations::Summ() const
{
    double r;
    r=x+y;
    return r;
}

double Operations::Subtract() const
{
    double r;
    r=x-y;
    return r;
}

double Operations::Multiplication() const
{
    double r;
    r=x*y;
    return r;
}
double Operations::Division() const
{
    double r;
    r=x/y;
    if (y==0) throw Error;
    return r;
}

double Operations::Power() const
{
    double r;
    r=pow(x,y);
    return r;
}

double Operations::Sin() const
{
    double r;
    r=sin(x);
    return r;
}

double Operations::Cos() const
{
    double r;
    r=cos(x);
    return r;
}
double Operations::Tan() const
{
    double r;
    r=tan(x);
    return r;
}

double Operations::Ln() const
{
    double r;
    r=log(x);
    return r;
}

double Operations::Exp() const
{
    double r;
    r=exp(x);
    return r;
}

double Operations::Negative() const
{
    double r;
    r=x*-1;
    return r;
}

double Operations::Precent() const
{
    double r;
    r=x*0.01;
    return r;
}
