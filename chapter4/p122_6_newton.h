//
// Created by Bureaux Tao on 2020/4/17.
//

#ifndef FS_P122_6_NEWTON_H
#define FS_P122_6_NEWTON_H

#endif //FS_P122_6_NEWTON_H

#include <iostream>
#include <cmath>
using namespace std;
namespace ch4_6 {
    double f(double a, double b, double c, double d, double x) {
        return a*x*x*x+b*x*x+c*x+d;
    }

    double f_dao(double a, double b, double c, double x) {
        return 3*a*x*x+2*b*x+c;
    }

    double diedaifa(double a, double b, double c, double d,double x0) {
        return (x0-(f(a,b,c,d,x0)/f_dao(a,b,c,x0)));
    }

    void exec() {
        double a=4,b=3,c=2,d=1;
        double x=1;

        while (fabs(diedaifa(a,b,c,d,x)-x)>=0.00001) {
            x=diedaifa(a,b,c,d,x);
        };
        cout<<x;
    }
}