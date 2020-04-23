//
// Created by Bureaux Tao on 2020/4/23.
//

#ifndef FS_CH13_WORKER_H
#define FS_CH13_WORKER_H

#endif //FS_CH13_WORKER_H

//套路
//fstream file("test.dat",ios::in|ios::out|ios::binary);
//if(!file) abort();
//Object object1=new Object();
//file.write((char)&object1, sizeof(object1));//写
//Object object2=new Object();
//file.read((char)&object2, sizeof(object2));//读
//file.close();


#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

namespace ch13_5 {
    struct Employee {
        int no;
        string name;
        int age;
        int wage;
    };

    void exec () {
        Employee employee[5]={
                Employee{1,"Jack",30,1000},
                Employee{2,"Rose",40,2000},
                Employee{3,"Tank",50,3000},
                Employee{4,"Mike",60,4000},
                Employee{5,"Dick",70,5000},
        };
        /*************************1**************************/
        ofstream outfile1("../chapter13/f1.dat",ios::binary);
        if(!outfile1) {
            cerr<<"error!"<<endl;
            exit(1);
        }
        for (int i = 0; i < 5; ++i) {
            outfile1.write((char *)&employee[i], sizeof(employee[i]));
        }
        outfile1.close();
        /*************************2**************************/
        ofstream outfile2("../chapter13/f1.dat",ios::binary|ios::app);
//        outfile2.seekp(0,ios::beg);
        if(!outfile1) {
            cerr<<"error!"<<endl;
            exit(1);
        }
        Employee new_employee[2]={
                Employee{6,"Dave",80,6000},
                Employee{7,"Matt",90,7000},
        };
        for (int i = 0; i < 2; ++i) {
            outfile2.write((char *)&new_employee[i], sizeof(new_employee[i]));
        }
        outfile2.close();
        /*************************3**************************/
        Employee employeeRead[7];
        ifstream infile("../chapter13/f1.dat",ios::binary);
        if(!infile) {
            cerr<<"error!"<<endl;
            exit(2);
        }
        for (int j = 0; j < 7; ++j) {
            infile.read((char *)&employeeRead[j], sizeof(employeeRead[j]));
        }
        infile.close();
        for (int k = 0; k <7 ; ++k) {
            cout<<employeeRead[k].no<<endl;
            cout<<employeeRead[k].name<<endl;
            cout<<employeeRead[k].age<<endl;
            cout<<employeeRead[k].wage<<endl<<endl;
        }
        /***********************4****************************/
        int s=0;
        do{
            cin>>s;
            bool isFound=false;
            for (int i = 0; i < 7; ++i) {
                if(employeeRead[i].no==s) {
                    cout<<employeeRead[i].no<<endl;
                    cout<<employeeRead[i].name<<endl;
                    cout<<employeeRead[i].age<<endl;
                    cout<<employeeRead[i].wage<<endl<<endl;
                    isFound= true;
                    continue;
                }
            }
            if(!isFound&&s!=0)
                cout<<"not found"<<endl;
        } while (s!=0);
    }
}
