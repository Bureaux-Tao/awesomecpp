//
// Created by Bureaux Tao on 2020/4/21.
//

#include "p296_9_shop.h"

void ch9_9::Shop::zongjia() {
    float rate=1.0;
    if(quantity>10)rate=0.98*rate;
    sum=sum+quantity*price*rate*(1-discount);
    n=n+quantity;
}

void ch9_9::Shop::display() {
  cout << sum << endl;
  cout << average() << endl;
}

void ch9_9::Shop::setDiscount() {
    cin>>discount;
}

float ch9_9::Shop::average() { return (sum / n); }

float ch9_9::Shop::discount;
float ch9_9::Shop::sum = 0;
int ch9_9::Shop::n=0;
