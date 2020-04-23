//
// Created by Bureaux Tao on 2020/4/21.
//

#include "p287_li913_frendclassfunction.h"

/*
 * 1. 将普通友元函数声明为友元函数：此函数可以通过传参访问该类私有变量
 * 2. 将A类中的成员函数声明为B类的友元函数：A类成员函数可直接访问A类私有变量，通过传参访问B类私有变量
 * 3. 调用在成员函数的对象里调用
 * 4. 不加声明友元的类名限定
 */

void ch9_li913::Time::display(Date &d) {
    cout<<d.year<<" "<<d.month<<" "<<d.day<<" ";
    cout<<this->hour<<":"<<this->minute<<":"<<this->second;
}