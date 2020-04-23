//
// Created by Bureaux Tao on 2020/4/21.
//

#ifndef FS_P296_9_SHOP_H
#define FS_P296_9_SHOP_H

#endif //FS_P296_9_SHOP_H

#include<iostream>
using namespace std;

namespace ch9_9 {
    class Shop {
    public:
        Shop(int m,int q,float p):num(m),quantity(q),price(p){};
        void zongjia();
        static float average();
        static void display();
        static void setDiscount();
    private:
        int num;//人员号码
        int quantity;//件数
        float price;//单价
        static float discount;//每天折扣
        static float sum;//总金额
        static int n;//总件数
    };

    void exec() {
        Shop::setDiscount();
        Shop s[3]={
                Shop(101,5,23.5),
                Shop(102,12,24.56),
                Shop(103,100,21.5)
        };
        int i;
        for(i=0;i<3;i++)
            s[i].zongjia();
        Shop::display();
    }
}

