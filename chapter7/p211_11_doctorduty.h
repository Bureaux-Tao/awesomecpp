//
// Created by Bureaux Tao on 2020/4/20.
//

#ifndef FS_P211_11_DOCTORDUTY_H
#define FS_P211_11_DOCTORDUTY_H

#endif //FS_P211_11_DOCTORDUTY_H

#include <iostream>
using namespace std;
namespace ch7_11 {
    enum weekday {
        Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
    };

    void exec() {
        int a=0,b=0,c=0,d=0,e=0,f=Thursday,g=0;
        int val[7]={0};
        for (int b = Monday; b <= Wednesday; ++b) {
            for (int c = Friday; c <= Sunday; ++c) {
                for (int a = Saturday; a <= Sunday ; ++a) {
                    for (int d = Monday; d < Sunday; ++d) {
                        for (int e = Monday; e < Sunday; ++e) {
                            for (int g = Monday; g < Sunday; ++g) {
                                if((a==c+1)&&(d=e+2)&&(b=g-3)&&(a>0)&&(b>0)&&(c>0)&&(d>0)&&(e>0)&&(g>0)) {
                                    for (int i = 0; i < 7; ++i) {
                                        val[i]=0;
                                    }
                                    val[(a-1)%7]++;
                                    val[(b-1)%7]++;
                                    val[(c-1)%7]++;
                                    val[(d-1)%7]++;
                                    val[(e-1)%7]++;
                                    val[(f-1)%7]++;
                                    val[(g-1)%7]++;

                                    bool right= true;
                                    for (int i = 0; i < 7; ++i) {
                                        if(val[i]>1) right= false;
                                    }
                                    if(right) {
                                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}