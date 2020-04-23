//
// Created by Bureaux Tao on 2020/4/21.
//

#ifndef FS_P283_LI911_STATICFUNCTION_H
#define FS_P283_LI911_STATICFUNCTION_H

#endif //FS_P283_LI911_STATICFUNCTION_H
#include <iostream>
using namespace std;
namespace ch9_li911{
    class Student {
    public:
        Student(int n,int a,float s):num(n),age(a),score(s){}
        void total();
        static float average();

    private:
        int num;
        int age;
        float score;
        static float sum;
        static int count;
    };

    void exec() {
        Student student[3]={
                Student(1001,18,70),
                Student(1002,19,78),
                Student(1005,20,98)
        };
        for (Student & i : student) {
            i.total();
        }
        cout<<Student::average();
    }
}