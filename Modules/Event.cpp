#include<iostream>
#include"header_files/Event.h"
using namespace std;

Event::Event(){
    
}

Event::Event(int id,string name, int type,int max,int min, string description){
    this->id = id;
    this->name = name;
    this->type = type;
    this->max = max;
    this->min = min;
    this->description = description;
}
