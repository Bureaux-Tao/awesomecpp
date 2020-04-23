//
// Created by Bureaux Tao on 2020/4/17.
//

#ifndef FS_P81_23_DIEDAIFA_H
#define FS_P81_23_DIEDAIFA_H

#endif //FS_P81_23_DIEDAIFA_H

#include <iostream>
using namespace std;
namespace ch3_23 {
    double formular(double xn, double a) {
        return (xn+(a/xn))/2;
    }

    double gh(double n) {
        double xn=n;
        double xn1=formular(xn,n);
        while (!((xn1-xn>=-0.00001)&&(xn1-xn<=0.00001))) {
            xn=xn1;
            xn1=formular(xn,n);
        }
        return xn1;
    }

    void exec() {
        cout<<gh(2);
    }
}