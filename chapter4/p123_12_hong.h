//
// Created by Bureaux Tao on 2020/4/18.
//

#ifndef FS_P123_12_HONG_H
#define FS_P123_12_HONG_H

#endif //FS_P123_12_HONG_H

#include <iostream>
#include <cmath>
#define s(a,b,c) (a+b+c)/2
#define AREA(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
using namespace std;
namespace ch4_12 {
    void exec() {
        double a,b,c;
        cin>>a>>b>>c;
        cout<<AREA(a,b,c, s(a,b,c));
    }
}