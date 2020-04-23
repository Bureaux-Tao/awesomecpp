//
// Created by Bureaux Tao on 2020/4/22.
//

#ifndef FS_P327_2_COMPLEX_H
#define FS_P327_2_COMPLEX_H

#endif //FS_P327_2_COMPLEX_H
#include <iostream>
using namespace std;
namespace ch10_2 {
    class Complex {
    private:
        double real;
        double image;
        static Complex add(double &d, Complex &c);
        static Complex mul(double &d,Complex &c);
    public:
        Complex():real(0),image(0){}
        Complex(double r,double i):real(r),image(i){}
        Complex(double r):real(r),image(0){}
        friend ostream &operator << (ostream &output,Complex &c);
        friend istream &operator >> (istream &input,Complex &c);
        friend Complex operator+ (Complex &c1,Complex &c2);
        friend Complex operator+ (double &i,Complex &c);
        friend Complex operator+ (Complex &c,double &i);
        Complex operator- (Complex &c);
        friend Complex operator* (Complex &c1,Complex &c2);
        friend Complex operator* (double &i,Complex &c);
        friend Complex operator* (Complex &c,double &i);
        Complex operator/ (Complex &c);
        operator double ();
    };

    void exec () {
        Complex c1=Complex(2,4),c2=Complex(1,2),r;
        double d=4;
//        cin>>c1>>c2;
        cout<<"c1="<<c1<<endl;
        cout<<"c2="<<c2<<endl;
        r=c1+c2;
        cout<<"c1+c2="<<r<<endl;
        r=c2-c1;
        cout<<"c2-c1="<<r<<endl;
        r=c2*c1;
        cout<<"c2*c1="<<r<<endl;
        r=c1*c2;
        cout<<"c1*c2="<<r<<endl;
        r=c2/c1;
        cout<<"c2/c1="<<r<<endl;
        r=c1+d;
        cout<<"c1+4="<<r<<endl;
        r=d+c1;
        cout<<"4+c1="<<r<<endl;
        r=c1*d;
        cout<<"c1*4="<<r<<endl;
        r=d*c1;
        cout<<"4*c1="<<r<<endl;
    }
}
