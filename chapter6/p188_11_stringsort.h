//
// Created by Bureaux Tao on 2020/4/20.
//

#ifndef FS_P188_11_STRINGSORT_H
#define FS_P188_11_STRINGSORT_H

#endif //FS_P188_11_STRINGSORT_H

#include <iostream>
using namespace std;
namespace ch6_11 {
    void exec() {
        char a[5][100];
        for (int i = 0; i < 5; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < 4; ++i) {
            for (int j = i; j < 5; ++j) {
                if(strcmp(a[i],a[j]) > 0) {
                    char tmp[100];
                    strcpy(tmp,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],tmp);
                }
            }
        }
        for (int j = 0; j < 5; ++j) {
            cout<<a[j]<<endl;
        }
    }
}