#include<iostream>
#include"header_files/Cred.h"

using namespace std;

Cred::Cred(){}

Cred::Cred(int uid, string pass){
    this->uid = uid;
    this->pass = pass;
}

void Cred::setCred(int uid, string pass){
    this->uid = uid;
    this->pass = pass;
}

int Cred::getUid(){ return uid; }
string Cred::getPass(){ return pass; }