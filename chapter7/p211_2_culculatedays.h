//
// Created by Bureaux Tao on 2020/4/20.
//

#ifndef FS_P211_2_CULCULATEDAYS_H
#define FS_P211_2_CULCULATEDAYS_H

#endif //FS_P211_2_CULCULATEDAYS_H

#include <iostream>
using namespace std;
namespace ch7_2 {
    struct Date{
        int year;
        int month;
        int day;
    };

    int count(Date date) {
        int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if(date.year%4==0) days[1]=29;
        if(date.year%100==0) days[1]=28;
        int sum=0;
        for (int i = 0; i <date.month-1; ++i) {
            if(i==date.month) break;
            sum+=days[i];
        }
        sum+=date.day;
        return sum;
    }

    void exec() {
        Date date=Date{2020,9,9};
        cout<<count(date);
    }
}