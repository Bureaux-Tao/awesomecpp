//
// Created by Bureaux Tao on 2020/4/21.
//

/*
 * 静态成员变量：
 * 1. 所有对象都共享的成员变量
 * 2. 类内定义，类外初始化
 * 3. 类名::静态变量名来使用
 */

/*
 * 静态成员函数：
 * 1. 主要用于访问静态成员
 * 2. 也可以访问非静态成员，但是要加对象名.成员名
 * 3. 公共成员函数可以引用静态成员和非静态成员
 * 4. 静态成员在类外被使用一定要在**类外**再声明/初始化一遍
 * 5. 静态成员函数调用加上类名限定，不用对象名限定
 */
#include "p283_li911_staticfunction.h"

void ch9_li911::Student::total() {
    sum+=score;
    count++;
}

float ch9_li911::Student::average() {
    return (sum/count);
}

float ch9_li911::Student::sum=0;
int ch9_li911::Student::count=0;