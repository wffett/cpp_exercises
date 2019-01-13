//the quadratic equation with one unknown，一元二次方程求根公式
//ax^2+bx+c=0

#include <iostream>
#include <cmath>
using namespace std;
void one_quadratic()
{
    float a,b,c,x1,x2;
    a=2;
    b=13;
    c=-5;
    if((b*b-4*a*c)>=0)
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }
    else
        cout<< "There is something wrong!"<< endl;

}
