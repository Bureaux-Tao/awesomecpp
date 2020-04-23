//
// Created by Bureaux Tao on 2020/4/23.
//

#ifndef FS_P327_4_MATRIX_H
#define FS_P327_4_MATRIX_H

#endif //FS_P327_4_MATRIX_H
#include <iostream>
using namespace std;
namespace ch10_4 {
    class Matrix {
    private:
        int m;
        int n;
        int **a;
    public:
        Matrix():m(0),n(0) {a= nullptr;}
        Matrix(int **A,int M,int N):m(M),n(N) {a=A;}
        friend ostream &operator <<(ostream &output,Matrix &matrix);
        friend istream &operator >>(istream &input,Matrix &matrix);
        friend Matrix operator + (Matrix &m1,Matrix &m2);
        friend Matrix operator * (Matrix &m1,Matrix &m2);
        Matrix operator ! ();
    };

    void exec() {
        Matrix matrix1,matrix2;
        cin>>matrix1;
        cin>>matrix2;
        cout<<matrix1<<endl;
        cout<<matrix2<<endl;
        Matrix matrix3=matrix1+matrix2;
        cout<<matrix3<<endl;
        Matrix matrix4=matrix1*matrix2;
        cout<<matrix4<<endl;
        Matrix matrix5;
        cin>>matrix5;
        cout<<matrix5<<endl;
        matrix5=!matrix5;
        cout<<matrix5<<endl;
    }
}