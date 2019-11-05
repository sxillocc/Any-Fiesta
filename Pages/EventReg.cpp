#include<bits/stdc++.h>
#include "header_files/Route.h"
#include "../Modules/header_files/Event.h"
using namespace std;

void Route::EventReg(int id){
    system("clear");
    vector<Event> eventList;
    eventList.push_back(Event(196,"Treasure Hunt",2,7,5,"All Teams have to search various items kept hidden.Various hints will be provided."));
    eventList.push_back(Event(197,"Dance Mania",2,10,8,"All Teams have to give their group dance Performances."));
    eventList.push_back(Event(198,"Essay Writing",1,1,1,"All participants will have to write an essay on a particular topic to be alloted at the time of event."));
    eventList.push_back(Event(199,"GK Quiz",2,2,2,"All teams will be asked various GK questions."));
    eventList.push_back(Event(200,"Pro Kabaddi",2,7,7,"All Teams will Kabaddi matches in a knock out tournament."));
    cout<<"\nEvent List:- \n\n";
    for (int i = 0; i < eventList.size(); i++)
        {
            cout << "Event ID : " << eventList[i].id << endl;
            cout << "Event Name : " << eventList[i].name << endl;
            cout << "Event Type : ";
            if (eventList[i].type == 1)
            {
                cout << "Solo Event" << endl;
            }
            else if (eventList[i].type == 2)
            {
                cout << "Team Event" << endl;
            }
            cout << "Maximum members allowed : " << eventList[i].max << endl;
            cout << "Minimum members allowed : " << eventList[i].min << endl;
            cout << "Description : " << eventList[i].description << endl;
            cout<<"\n";
        }
    cout<<"\nWelcome to Event Registration!\n\n";
    int eid;
    cout<<"Please give the event id of event you want to register:- ";
    cin>>eid;
    eid = eid-196;
    
    if(eid >=0 && eid<eventList.size()){
        if(eventList[eid].type == 1){
            //solo..
            //TODO__REGISTER
            cout<<"TODO-- Register id "<<id+1096<<" into event "<<eid+196<<endl;
        }else{
            //multiple..
            int teamSize;
            cout<<"Please give team size according to guidance: ";
            cin>>teamSize;
            if(eventList[eid].min<=teamSize && eventList[eid].max>=teamSize){
                //TODO --- REGISTER
                cout<<"TODO-- Register id "<<id+1096<<" into event "<<eid+196<<" with team Size: "<<teamSize<<endl;
            }else{
                cout<<"Invalid Team Size"<<endl;
                cout<<"Thank-you for using Any-Fiesta!"<<endl;
            }
        }
    }else{
        cout<<"Incorrect Event id"<<endl;
        cout<<"Thank-you for using Any-Fiesta!"<<endl;
    }

    int n;
    cout << "\n\n1. Back\n";
    cout << "2. Exit\n";
    cout << "Enter your Choice: ";
    cin >> n;

    switch (n)
    {
    case 1:
        PublicNavPage(id);
        break;

    case 2:
        cout << "\n\nThank-you for using Any-Fiesta!\n";
        break;

    default:
        while (1)
        {
            char choice;
            system("clear");
            cout << endl;

            cout << "Invalid Choice" << endl;
            cout << "Want to try again ? (y/n) ";
            cin >> choice;

            if(choice == 'y'){
                PublicProfile(id);
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}