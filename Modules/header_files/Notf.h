#ifndef Notf_H
#define Notf_H 
#include<iostream>
using namespace std;

class Notf{
    public:
        int dd,mm,hour,minute;
        string msg;
        Notf();
        Notf(int,int,int,int,string);
        string getNotification();
};
 
#endif 