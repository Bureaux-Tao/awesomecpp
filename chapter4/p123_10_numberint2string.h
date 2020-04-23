//
// Created by Bureaux Tao on 2020/4/18.
//

#ifndef FS_P123_10_NUMBERINT2STRING_H
#define FS_P123_10_NUMBERINT2STRING_H

#endif //FS_P123_10_NUMBERINT2STRING_H

#include <iostream>
using namespace std;
namespace ch4_10 {
    int convert(int n) {
        if(n<10) {
            cout<<n;
            return n;
        } else {
            convert(n/10);
            cout<<n%10;
            return n/10;
        }
    }

    void exec() {
        convert(1234);
    }
}
