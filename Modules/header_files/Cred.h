#ifndef Cred_H
#define Cred_H 
#include<iostream>
using namespace std;

class Cred{
    private:
        int uid;
        string pass;
    public:
        Cred();
        Cred(int,string);
        void setCred(int,string);
        int getUid();
        string getPass();
};
 
#endif 