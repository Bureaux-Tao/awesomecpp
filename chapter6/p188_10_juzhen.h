//
// Created by Bureaux Tao on 2020/4/20.
//

#ifndef FS_P188_10_JUZHEN_H
#define FS_P188_10_JUZHEN_H

#endif //FS_P188_10_JUZHEN_H

#include <iostream>
using namespace std;
namespace ch6_10 {
    void exec() {
        int a[5][5];
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                cin>>a[i][j];
            }
        }

        int largest;
        int largestIndexI;
        int largestIndexJ;
        int smallest[4]={a[0][0],a[0][1],a[0][2],a[0][3]};
        int smallestIndexI[4]={0,0,0,0};
        int smallestIndexJ[4]={0,1,2,3};

        largest=a[0][0];
        largestIndexI=0;
        largestIndexJ=0;
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if(a[i][j]>largest) {
                    largest=a[i][j];
                    largestIndexI=i;
                    largestIndexJ=j;
                }
            }
        }
        int temp=a[largestIndexI][largestIndexJ];
        a[largestIndexI][largestIndexJ]=a[2][2];
        a[2][2]=temp;

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if(a[i][j]<smallest[0]) {
                    smallest[0]=a[i][j];
                    smallestIndexI[0]=i;
                    smallestIndexJ[0]=j;
                }
            }
        }

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if(a[i][j]<smallest[0]) {
                    smallest[0]=a[i][j];
                    smallestIndexI[0]=i;
                    smallestIndexJ[0]=j;
                }
            }
        }

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if(a[i][j]>smallest[0]&&a[i][j]<smallest[1]) {
                    smallest[1]=a[i][j];
                    smallestIndexI[1]=i;
                    smallestIndexJ[1]=j;
                }
            }
        }

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if(a[i][j]>smallest[1]&&a[i][j]<smallest[2]) {
                    smallest[2]=a[i][j];
                    smallestIndexI[2]=i;
                    smallestIndexJ[2]=j;
                }
            }
        }

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if(a[i][j]>smallest[2]&&a[i][j]<smallest[3]) {
                    smallest[3]=a[i][j];
                    smallestIndexI[3]=i;
                    smallestIndexJ[3]=j;
                }
            }
        }

        temp=a[0][0];
        a[0][0]=a[smallestIndexI[0]][smallestIndexJ[0]];
        a[smallestIndexI[0]][smallestIndexJ[0]]=temp;

        temp=a[0][4];
        a[0][4]=a[smallestIndexI[1]][smallestIndexJ[1]];
        a[smallestIndexI[1]][smallestIndexJ[1]]=temp;

        temp=a[4][0];
        a[4][0]=a[smallestIndexI[2]][smallestIndexJ[2]];
        a[smallestIndexI[2]][smallestIndexJ[2]]=temp;

        temp=a[4][4];
        a[4][4]=a[smallestIndexI[3]][smallestIndexJ[3]];
        a[smallestIndexI[3]][smallestIndexJ[3]]=temp;

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}