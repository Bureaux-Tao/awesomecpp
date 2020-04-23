//
// Created by Bureaux Tao on 2020/4/19.
//

#ifndef FS_P151_6_YANGHUITRIANGLE_H
#define FS_P151_6_YANGHUITRIANGLE_H

#endif //FS_P151_6_YANGHUITRIANGLE_H

#include <iostream>
using namespace std;
namespace ch5_6{
    int jiecheng(int n) {
        int r=1;
        for (int i = 1; i <= n; ++i) {
            r*=i;
        }
        return r;
    }

    int c(int m,int n) {
        if(m==0) return 1;
        else return (jiecheng(n)/(jiecheng(m)*jiecheng(n-m)));
    }
    void exec () {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j <= i; ++j) {
                cout << c(j, i) << "  ";
//                cout << "c("<<j<<','<< i <<')' ;
            }
            cout << endl;
        }
    }
}