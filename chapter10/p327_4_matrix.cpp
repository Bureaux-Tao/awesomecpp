//
// Created by Bureaux Tao on 2020/4/23.
//

#include "p327_4_matrix.h"

ostream &ch10_4::operator<<(ostream &output, ch10_4::Matrix &matrix) {
    for (int i = 0; i < matrix.m; ++i) {
        for (int j = 0; j < matrix.n; ++j) {
            output<<matrix.a[i][j]<<" ";
        }
        output<<endl;
    }
    return output;
}

istream &ch10_4::operator>>(istream &input, ch10_4::Matrix &matrix) {
    input>>matrix.m;
    input>>matrix.n;
    matrix.a=new int*[matrix.m];
    for (int i = 0; i < matrix.m; ++i) {
        matrix.a[i]=new int[matrix.n];
        for (int j = 0; j < matrix.n; ++j) {
            input>>matrix.a[i][j];
        }
    }
    return input;
}

ch10_4::Matrix ch10_4::operator+(ch10_4::Matrix &m1, ch10_4::Matrix &m2) {
    if(m1.m!=m2.m||m1.n!=m2.n) {
        cout<<"error"<<endl;
        return Matrix();
    }
    int **a=new int*[m1.m];
    for (int i = 0; i < m1.m; ++i) {
        a[i]=new int[m1.n];
        for (int j = 0; j <m1.n ; ++j) {
            a[i][j]=m1.a[i][j]+m2.a[i][j];
        }
    }
    Matrix r=Matrix(a,m1.m,m1.n);
    return r;
}

ch10_4::Matrix ch10_4::operator*(ch10_4::Matrix &m1, ch10_4::Matrix &m2) {
    if(m1.n!=m2.m) {
        cout<<"error"<<endl;
        return Matrix();
    }
    int **a=new int*[m1.m];
    for (int i = 0; i < m1.m; ++i) {
        a[i]=new int[m2.n];
        for (int j = 0; j <m2.n ; ++j) {
            a[i][j]=0;
            for (int k = 0; k < m1.n; ++k) {
                a[i][j]+=m1.a[i][k]*m2.a[k][j];
            }
        }
    }
    Matrix r=Matrix(a,m1.m,m1.n);
    return r;
}

ch10_4::Matrix ch10_4::Matrix::operator!() {
    int **a=new int*[n];
    for (int i = 0; i <n; ++i) {
        a[i]=new int[m];
        for (int j = 0; j <m ; ++j) {
            a[i][j]=this->a[j][i];
        }
    }
    return Matrix(a,n,m);
}

