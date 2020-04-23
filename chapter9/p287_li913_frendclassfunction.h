//
// Created by Bureaux Tao on 2020/4/21.
//

#ifndef FS_P287_LI913_FRENDCLASSFUNCTION_H
#define FS_P287_LI913_FRENDCLASSFUNCTION_H

#endif //FS_P287_LI913_FRENDCLASSFUNCTION_H

#include <iostream>
using namespace std;
namespace ch9_li913 {
    class Date;
    class Time{
    public:
        Time(int h,int m,int s):hour(h),minute(m),second(s){}
        void display(Date &);
    private:
        int hour;
        int minute;
        int second;
    };

    class Date {
    public:
        Date(int m,int d,int y):month(m),day(d),year(y){}
        friend void Time::display(Date &) ;
    private:
        int month;
        int day;
        int year;
    };

    void exec() {
        Time time=Time(10,10,10);
        Date date=Date(9,9,2020);
        time.display(date);
    }
}
