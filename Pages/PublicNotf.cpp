#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include "header_files/Route.h"
#include "../Modules/header_files/Notf.h"
using namespace std;

void Route::PublicNotf(int id){
    system("clear");
    cout << endl;
    cout << "Notification\n\n";

    vector<Notf> notificationList;
    notificationList.push_back(Notf(30,10,17,30,"You have successfully Registered"));
    notificationList.push_back(Notf(30,10,19,40,"Our Chief Guest is Dr. Parikshit K. Singh"));
    notificationList.push_back(Notf(31,10,10,30,"Inaugration Ceremony will start at tomorrow 10:00am"));
    notificationList.push_back(Notf(01,11,11,30,"Venue of Event 301 is changed to VLTC"));
    notificationList.push_back(Notf(01,11,13,00,"Event 310 is cancelled"));
    

    for(int i=0;i<notificationList.size();i++){
        cout<<notificationList[i].getNotification()<<endl;
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
                PublicNotf(id);
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}