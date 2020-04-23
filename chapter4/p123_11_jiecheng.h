//
// Created by Bureaux Tao on 2020/4/18.
//

#ifndef FS_P123_11_JIECHENG_H
#define FS_P123_11_JIECHENG_H

#endif //FS_P123_11_JIECHENG_H
#include <iostream>
using namespace std;
namespace ch4_11 {
    int f(int n,int &sum) {
        if(n==1) {
            sum+=1;
            return 1;
        }else {
            sum+=n*n;
            return f(n-1,sum);
        }
    }

    void exec() {
        int sum=0;
        f(5,sum);
        cout<<sum;
    }
}