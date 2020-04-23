//
// Created by Bureaux Tao on 2020/4/22.
//

#include "p327_2_complex.h"

/**
 * 定义重载输出流运算符<<，只能作为友元，不能做成员，因此要作用域名限定，不要类名限定
 * @param output
 * @param c Complex
 * @return output
 */
ostream &ch10_2::operator<<(ostream &output, ch10_2::Complex &c) {
    if(c.real==0) output<<c.image<<'i';
    else if(c.image==0) output<<c.real;
    else {
        output<<c.real;
        if(c.image>0) output<<'+';
        output<<c.image<<'i';
    }
    return output;
}

/**
 * 定义重载输入流运算符>>，只能作为友元，不能做成员，因此要作用域名限定，不要类名限定
 * @param input
 * @param c
 * @return input
 */
istream &ch10_2::operator>>(istream &input, ch10_2::Complex &c) {
    input>>c.real>>c.image;
    return input;
}

/**
 * 重载+，用友元函数的方式重载，不写类名限定，只写作用域名限定
 * @param c1 c2
 * @return r
 */
ch10_2::Complex ch10_2::operator+(Complex &c1,Complex &c2) {
    Complex r=Complex();
    r.image=c1.image+c2.image;
    r.real=c1.real+c2.real;
    return r;
}

/**
 * 重载-，用成员函数的方式重载，需要加上类名限定，可以访问参数的私有变量，因为是一家人
 * @param c
 * @return r
 */
ch10_2::Complex ch10_2::Complex::operator-(ch10_2::Complex &c) {
    Complex r=Complex();
    r.image=image-c.image;
    r.real=real-c.real;
    return r;
}

/**
 * 重载*，用友元函数的方式重载
 * @param c
 * @return r
 */
ch10_2::Complex ch10_2::operator*(Complex &c1,Complex &c2) {
    Complex r=Complex();
    r.real=c1.real*c2.real-c1.image*c2.image;
    r.image=c1.real*c2.image+c1.image*c2.real;
    return r;
}

/**
 * 除
 * @param c1
 * @param c2
 * @return
 */
ch10_2::Complex ch10_2::Complex::operator/(ch10_2::Complex &c) {
    Complex r=Complex();
    r.real=(real*c.real+image*c.image)/(c.real*c.real+c.image*c.image);
    r.image=(image*c.real-real*c.image)/(c.real*c.real+c.image*c.image);
    return r;
}

/**
 * 转换构造函数，没有强转就报错
 * @return real
 */
ch10_2::Complex::operator double() {
    return real;
}

/**
 * 重载强转+
 * @param i
 * @param c
 * @return c
 */
ch10_2::Complex ch10_2::operator+(double &i, ch10_2::Complex &c) {
    return ch10_2::Complex::add(i,c);
}


ch10_2::Complex ch10_2::operator+(ch10_2::Complex &c, double &i) {
    return ch10_2::Complex::add(i,c);
}

/**
 * 重载强转*
 * @param i
 * @param c
 * @return c
 */
ch10_2::Complex ch10_2::operator*(double &i, ch10_2::Complex &c) {
    return ch10_2::Complex::mul(i,c);
}

ch10_2::Complex ch10_2::operator*(ch10_2::Complex &c, double &i) {
    return ch10_2::Complex::mul(i,c);
}

ch10_2::Complex ch10_2::Complex::add(double &d, ch10_2::Complex &c) {
    Complex r=Complex();
    r.image=c.image;
    r.real=d+c.real;
    return r;
}

ch10_2::Complex ch10_2::Complex::mul(double &d, ch10_2::Complex &c) {
    Complex r=Complex();
    r.image=c.image*d;
    r.real=c.real*d;
    return r;
}