//
// Created by Bureaux Tao on 2020/4/20.
//

#ifndef FS_P188_13_JIFEN_H
#define FS_P188_13_JIFEN_H

#endif //FS_P188_13_JIFEN_H

#include <iostream>
#include <cmath>
using namespace std;
namespace ch6_13 {
    double integral(double (*p)(double), double a, double b) {
        double step=(b-a)/100;
        double sum=0;
        for (double i = a; i <=b ; i=i+step) {
            double s=((*p)(i)+(*p)(i+step))*step/2;
//            double s=(*p)(i)*step;
            sum+=s;
        }
        return sum;
    }

    void exec() {
        double (*p)(double);

        cout<<integral(sin,0,1)<<endl;
        cout<<integral(cos,-1,1)<<endl;
        cout<<integral(exp,0,2)<<endl;
    }
}
