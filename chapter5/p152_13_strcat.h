//
// Created by Bureaux Tao on 2020/4/19.
//

#ifndef FS_P152_13_STRCAT_H
#define FS_P152_13_STRCAT_H

#endif //FS_P152_13_STRCAT_H

#include <iostream>
using namespace std ;
namespace ch5_13 {


    void exec() {
        char a[100];
        char b[100];
        cin>>a;
        cin>>b;
        char *m=a;
        char *n=b;
        while (*m!='\0') {
            m++;
        }
        while(*n!='\0') {
            *m=*n;
            m++;
            n++;
        }
        *m=*n;
        cout<<a;
    }
}