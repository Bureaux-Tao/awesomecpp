//
// Created by Bureaux Tao on 2020/4/17.
//

#ifndef FS_P82_25_PINPANGQIUSAI_H
#define FS_P82_25_PINPANGQIUSAI_H

#endif //FS_P82_25_PINPANGQIUSAI_H

#include <iostream>
using namespace std;
namespace ch3_25 {
    bool judge(char jia, char yi) {
        if(jia=='A'&&yi=='X') return false;
        if(jia=='C'&&yi=='X') return false;
        return !(jia == 'C' && yi == 'Z');
    }
    void exec(){
        char jia[]="ABC";
        char yi[]="XYZ";
        for (int i = 0; i < 3; ++i) {
            if(judge(jia[0],yi[i])) {
                for (int j = 0; j < 3; ++j) {
                    if(judge(jia[1],yi[j]) &&(j!=i)) {
                        for (int k = 0; k < 3; ++k) {
                            if(judge(jia[2],yi[k])&&(k!=i)&&(k!=j)) {
                                cout<<jia[0]<<" vs "<<yi[i]<<endl;
                                cout<<jia[1]<<" vs "<<yi[j]<<endl;
                                cout<<jia[2]<<" vs "<<yi[k]<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
}