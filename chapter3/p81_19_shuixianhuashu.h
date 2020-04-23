//
// Created by Bureaux Tao on 2020/4/14.
//
#include <iostream>
using namespace std;
namespace ch3_19 {
    bool judgeShuiXianHuaShu(int n) {
        int wei[3];
        int save=n;
        for (int i=0;n>0;n/=10,i++) {
            wei[i]=n%10;
        }
        int sum=0;
        for (int i : wei) {
            sum+=i*i*i;
        }
        return sum == save;
    }

    void exec() {
        for (int i = 100; i < 1000; ++i) {
            if(judgeShuiXianHuaShu(i)) cout<<i<<" ";
        }
    }
}

