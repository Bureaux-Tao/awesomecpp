//
// Created by Bureaux Tao on 2020/4/15.
//

#ifndef FS_P81_20_WANSHU_H
#define FS_P81_20_WANSHU_H

#endif //FS_P81_20_WANSHU_H

#include <iostream>
using namespace std;
namespace ch3_20 {
    void judge(int n) {
        int a[1000]={0};
        int sum=0;
        for (int i = 1,j=0; i <n ; ++i) {
            if(n%i==0) {
                sum += i;
                a[j]=i;
                j++;
            }
        }
        if(sum==n) {
            cout << n << " its factors are ";
            for (int k = 0; a[k]!=0; ++k) {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }

    void exec() {
        for (int i = 1; i < 10000; ++i) {
            judge(i);
        }
//        judge(6);
    }
}
