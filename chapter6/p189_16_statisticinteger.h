//
// Created by Bureaux Tao on 2020/4/20.
//

#ifndef FS_P189_16_STATISTICINTEGER_H
#define FS_P189_16_STATISTICINTEGER_H

#endif //FS_P189_16_STATISTICINTEGER_H

#include <iostream>
using namespace std;
namespace ch6_16 {
    int string2Int(char *p,int n) {
        int result=0;
        for (int i = 0; i < n; ++i) {
            result=result*10+(p[i]-48);
        }
        return result;
    }

    void exec () {
        char a[100];
        gets(a);
        int b[100];
        int count=0;
        char temp[100];
        int n=0;
        for (char *p=a;*p!='\0';p++) {
            if(*p>='0'&&*p<='9') {
                temp[n]=*p;
                n++;
            } else {
                if(n==0) continue;
                b[count++]=string2Int(temp,n);
                n=0;
            }
        }
        if(n!=0) {
            b[count++]=string2Int(temp,n);
            for (int i = 0; i < count; ++i) {
                cout<<b[i]<<" ";
            }
        }
    }
}
