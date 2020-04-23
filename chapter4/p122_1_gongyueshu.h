//
// Created by Bureaux Tao on 2020/4/17.
//

#ifndef FS_P122_1_GONGYUESHU_H
#define FS_P122_1_GONGYUESHU_H

#endif //FS_P122_1_GONGYUESHU_H

#include <iostream>
using namespace std;

namespace ch4_1 {
    int gys(int smaller,int bigger) {
        while (smaller) {
            int r=bigger%smaller;
            bigger=smaller;
            smaller=r;
        }
        return bigger;
    }

    int gbs(int smaller,int bigger) {
        return smaller*bigger/gys(smaller,bigger);
    }

    void exec () {
        cout<<gys(20,16)<<endl;
        cout<<gbs(20,16);
    }
}
