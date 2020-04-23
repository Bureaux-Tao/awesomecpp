//
// Created by Bureaux Tao on 2020/4/23.
//

#ifndef FS_CHAPTER13_H
#define FS_CHAPTER13_H

#endif //FS_CHAPTER13_H

/*
 * 输入输出，无论是文件还是终端显示，in和out始终针对本台计算机（此屏幕）的
 */

#include <iostream>
#include <fstream>
using namespace std;
namespace ch13_li1310 {
    void save2File();

    void getFromFile();

    void exec() {
        save2File();
        getFromFile();
    }

    void getFromFile() {
        char ch;
        ifstream infile("../chapter13/f2.dat",ios::in);
        if(!infile) {
            cerr<<"error!"<<endl;
            exit(2);
        }
        ofstream outfile("../chapter13/f3.dat");
        if(!outfile) {
            cerr<<"error!"<<endl;
            exit(3);
        }
        while (infile.get(ch)) {   //判断读取字符成功时执行
            if(ch>='a'&&ch<='z')
                ch=ch-32;
            outfile.put(ch);    //写入f3.dat
            cout<<ch;
        }
        infile.close();//关文件
        outfile.close();
    }

    void save2File() {
        ofstream outfile("../chapter13/f2.dat");
        if(!outfile){
            cerr<<"error!"<<endl;
            exit(1);
        }
        char c[80];
        cin.get(c,80);
        for (char *p=c; *p!='\0' ; p++) {
            if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')) {
                outfile.put(*p);//存入文件
                cout<<*p;
            }
        }
        outfile.close();
    }
}