#include<iostream>
#include"header_files/Notf.h"
#include<string.h>
using namespace std;

Notf::Notf(){       }

Notf::Notf(int dd, int mm, int hour, int minute,string msg){
    this->dd = dd;
    this->mm = mm;
    this->hour = hour;
    this->minute = minute;
    this->msg = msg;
}

string Notf::getNotification(){
    return " " + to_string(dd) +
           "/" + to_string(mm) +
           "   [" + to_string(hour) +
           " : " + to_string(minute) + "]  -   " + msg+" ";
}