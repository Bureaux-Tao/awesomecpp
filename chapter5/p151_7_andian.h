//
// Created by Bureaux Tao on 2020/4/19.
//

#ifndef FS_P151_7_ANDIAN_H
#define FS_P151_7_ANDIAN_H

#endif //FS_P151_7_ANDIAN_H
#include <iostream>
using namespace std;
namespace ch5_7 {
    void exec() {
        int m,n;
        cin>>m>>n;
        int **p=new int *[m];
        for (int i = 0; i < m; ++i) {
            p[i]=new int[n];
            for (int j = 0; j < n; ++j) {
                cin>>p[i][j];
            }
        }
        for (int i = 0; i < m; ++i) {
            int maxLine=p[i][0];
            int maxLineIndex=0;
            for (int j = 0; j < n; ++j) {
                if(p[i][j]>maxLine) {
                    maxLine=p[i][j];
                    maxLineIndex=j;
                }
            }
            int minColumn=p[0][maxLineIndex];
            for (int k = 0; k < m; ++k) {
                if(p[k][maxLineIndex]<maxLine) {
                    minColumn=p[k][maxLineIndex];
                }
            }
            if(minColumn==maxLine) cout<<minColumn;
        }
    }
};