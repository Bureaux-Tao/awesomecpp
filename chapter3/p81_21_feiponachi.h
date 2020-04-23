//
// Created by Bureaux Tao on 2020/4/15.
//

#ifndef FS_P81_21_FEIPONACHI_H
#define FS_P81_21_FEIPONACHI_H

#endif //FS_P81_21_FEIPONACHI_H

#include <iostream>
using namespace std;

namespace ch3_21 {
    void exec() {
        double fz[20]={0};
        double fm[20]={0};
        for (int i=0;i<20;i++) {
            if(i==0) {
                fz[0]=2;
                fm[0]=1;
            }
            if(i==1) {
                fz[1]=3;
                fm[1]=2;
            }
            for (int i=2;i<20;i++) {
                fz[i]=fz[i-1]+fz[i-2];
                fm[i]=fm[i-1]+fm[i-2];
            }
        }
        double sum=0;
        for (int j = 0; j < 20; ++j) {
            double tmp=fz[j]/fm[j];
            sum+=tmp;
        }
        cout<<sum;
    }
}