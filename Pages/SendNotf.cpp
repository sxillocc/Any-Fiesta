#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include "header_files/Route.h"
#include "../Modules/header_files/Notf.h"
using namespace std;

void Route::SendNotf(int e){
    system("clear");
    cout << endl;
    cout << "Send Notification\n\n";

    vector<Notf> notificationList;
    notificationList.push_back(Notf(30,10,17,30,"You have successfully Registered"));
    notificationList.push_back(Notf(30,10,19,40,"Our Chief Guest is Dr. Parikshit K. Singh"));
    notificationList.push_back(Notf(31,10,10,30,"Inaugration Ceremony will start at tomorrow 10:00am"));
    notificationList.push_back(Notf(01,11,11,30,"Venue of Event 301 is changed to VLTC"));
    notificationList.push_back(Notf(01,11,13,00,"Event 310 is cancelled"));
    
    string errors[4] = {"Date","Month","Hour","Minute"};
    if(e != -1){
        cout<<"Incorrect "<<errors[e]<<"\n\n";
    }

    Notf notf;
    int x,y;
    cout<<"Give Following Details:- "<<endl;
    cout<<"Give date and month: ";
    cin>>x>>y;
    if(x>31||x<0){
        SendNotf(0);
    }
    if(y>12||y<1){
        SendNotf(1);
    }

    notf.dd = x;
    notf.mm = y;

    cout<<"Give hour and minute in 24 hour format: ";
    cin>>x>>y;
    if(x>23||x<0){
        SendNotf(2);
    }
    if(y>59||y<0){
        SendNotf(3);
    }

    notf.hour = x;
    notf.minute = y;

    cout<<"Give Message: ";
    cin.ignore();
    getline(cin,notf.msg);

    notificationList.push_back(notf);
    cout<<"\n\n-------------------------------\n";
    cout<<"Notification send successfully\n";
    int n;
    cout << "\n\n1. Back\n";
    cout << "2. Exit\n";
    cout << "Enter your Choice: ";
    cin >> n;

    switch (n)
    {
    case 1:
        AdminHomePage();
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
                SendNotf(-1);
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}