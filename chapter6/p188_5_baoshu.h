//
// Created by Bureaux Tao on 2020/4/19.
//

#ifndef FS_P188_5_BAOSHU_H
#define FS_P188_5_BAOSHU_H

#endif //FS_P188_5_BAOSHU_H

#include <iostream>
using namespace std;
namespace ch6_5 {
    void exec() {
        int n;
        cin>>n;
        int *a=new int[n];
        int index=1;
        for (int i = 0; i < n; ++i) {
            a[i]=index;
            index++;
        }
        int m=n;
        int i=0;
        int count=1;
        while (m>1) {
            if(count==3) {
                for (int j = i; j < m; ++j) {
                    a[j]=a[j+1];
                }
                count=1;
                m--;
            }
            i=(i+1)%m;
            count++;
        }
        cout<<a[0];
    }
}