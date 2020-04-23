//
// Created by Bureaux Tao on 2020/4/15.
//

#ifndef FS_P81_22_HOUCHITAO_H
#define FS_P81_22_HOUCHITAO_H

#endif //FS_P81_22_HOUCHITAO_H

#include <iostream>
using namespace std;
namespace ch3_22 {
    int eat (int &day) {
        if(day==10)
            return 1;
        else {
            day++;
            return (eat(day)+1)*2;
        }
    }

    void exec() {
        int a=1;
        cout<<eat(a);
    }
}
