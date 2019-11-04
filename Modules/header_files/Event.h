#ifndef Event_H
#define Event_H 
#include<iostream>
using namespace std;

class Event{
  public:
    string name,description;
    int id,type,max,min;
    Event();
    Event(int,string,int,int,int,string);
};
 
#endif 