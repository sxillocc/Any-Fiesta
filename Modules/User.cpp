#include<iostream>
#include"header_files/User.h"
using namespace std;

User::User(){       }

User::User(int uid,string name, string phone, 
            string cid,Cred credential,int gender
            ,string color){
    this->uid = uid;
    this->name = name;
    this->phone = phone;
    this->cid = cid;
    this->credential = credential;
    this->gender = gender;
    this->color = color;
}