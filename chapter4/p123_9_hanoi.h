//
// Created by Bureaux Tao on 2020/4/18.
//

#ifndef FS_P123_9_HANOI_H
#define FS_P123_9_HANOI_H

#endif //FS_P123_9_HANOI_H

#include <iostream>
using namespace std;
namespace ch4_9 {
    void move(char x,char y) {
        cout<<x<<" -> "<<y<<endl;
    }

    void hanio(int n,char left,char middle,char right) {
        if(n==1) move(left,right);
        else {
            hanio(n-1,left,middle,right);
            move(left,right);
            hanio(n-1,middle,left,right);
        }
    }

    void exec() {
        hanio(4,'A','B','C');
    }
}