//
// Created by Bureaux Tao on 2020/4/19.
//

#ifndef FS_P188_4_SHUZUYIDONG_H
#define FS_P188_4_SHUZUYIDONG_H

#endif //FS_P188_4_SHUZUYIDONG_H

#include <iostream>
using namespace std;
namespace ch6_4 {
    void exec() {
        int a[10];
        for (int i = 0; i < 10; ++i) {
            cin>>a[i];
        }
        int b[10];
        int m;
        cin>>m;
        for (int j = 0; j < 10; ++j) {
            int i=(j+(10-m))%10;
            if(i<0) i=10+i;
            b[j]=a[i];
        }
        for (int l = 0; l < 10; ++l) {
            a[l]=b[l];
        }
        for (int k = 0; k < 10; ++k) {
            cout<<a[k]<<" ";
        }
    }
}