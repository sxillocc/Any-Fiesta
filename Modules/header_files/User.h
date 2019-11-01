#ifndef User_H
#define User_H 
#include "Cred.h"
#include<iostream>
using namespace std;

class User{
    public:
        string name,phone,cid,color;
        int uid,gender;
        Cred credential;
        User();
        User(int,string, string, string,Cred,int,string);
};
 
#endif 