//
// Created by Bureaux Tao on 2020/4/17.
//

#ifndef FS_P122_8LERANGDEDUO_H
#define FS_P122_8LERANGDEDUO_H

#endif //FS_P122_8LERANGDEDUO_H

#include <iostream>
using namespace std;
namespace ch4_8 {
    double p(int n,int x) {
        if(n==0) return 1;
        else if(n==1) return x;
        else if(n>1) return (((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n);
    }

    void exec () {
        double n,x;
        cin>>n>>x;
        cout<<p(n,x);
    }
}