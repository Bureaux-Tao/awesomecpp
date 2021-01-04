//
// Created by Bureaux Tao on 2020/4/23.
//

#ifndef FS_P400_5_SHAPE_H
#define FS_P400_5_SHAPE_H

#endif //FS_P400_5_SHAPE_H

/*
 * 虚函数：
 * 有virtual调子类，没virtual调基类
 * A *a=new B();
 * a->foo;  //有v调B，没v调A
 */

/*
 * 纯虚函数：抽象函数
 */

/*
 * 抽象类：
 * 1. 不能实例化
 * 2. 包含纯虚函数的类都是抽象类
 * 3. 派生类对所有纯虚函数实例化了，则此派生类可以实例化，不然此派生类还是抽象类
 */
#include <iostream>
using namespace std;

namespace ch12_5{
    class Shape {
    protected:
        static double areaSum;
    public:
        virtual double area()=0;
        virtual void getSumArea(){areaSum=0;}

        static double printSumArea() {return areaSum;}
    };

    class Circle:public Shape{
    private:
        double r;
    public:
        Circle():r(0){}
        Circle(double R):r(R){}
        virtual double area() override {
            return 3.14*r*r;
        }

        void getSumArea() override{
            Shape::areaSum+=area();
        }
    };

    class Square:public Shape{
    private:
        double l;
    public:
        Square():l(0){}
        Square(double L):l(L){}
        virtual double area() override {
            return l*l;
        }
        void getSumArea() override{
            Shape::areaSum+=area();
        }
    };

    class Rectangle:public Shape{
    private:
        double l;
        double w;
    public:
        Rectangle():l(0),w(0){}
        Rectangle(double L, double W):l(L),w(W){}
        virtual double area() override {
            return w*l;
        }
        void getSumArea() override{
            Shape::areaSum+=area();
        }
    };

    class Trapezoid:public Shape{
    private:
        double upper,height,under;
    public:
        Trapezoid(double up, double un, double h):upper(up),under(un),height(h){}
        Trapezoid():upper(0),under(0),height(0){}
        virtual double area() override {
            return (under+upper)*height/2;
        }
        void getSumArea() override{
            Shape::areaSum+=area();
        }
    };

    class Triangle:public Shape{
    private:
        double l,h;
    public:
        Triangle():l(0),h(0){}
        Triangle(double L, double H):l(L),h(H){}
        virtual double area() override {
            return l*h/2;
        }
        void getSumArea() override{
            Shape::areaSum+=area();
        }
    };

    double Shape::areaSum=0;

    void exec () {
        Shape *shape[5]={
                new Circle(2),
                new Square(3),
                new Rectangle(1,4),
                new Trapezoid(2,3,2),
                new Triangle(3,2)
        };
        for (int i = 0; i < 5; ++i) {
            cout<<shape[i]->area()<<endl;
            shape[i]->getSumArea();
        }
        cout<<Shape::printSumArea();
    }
}