#include<iostream>
#include<stdlib.h>
#include"header_files/Route.h"
using namespace std;

void Route::AdminHomePage(){
    system("clear");
    cout<<"\n";

    int n;
    Route r;

    cout<<"Welcome to Admin Portal!\n\n";
    cout<<"1. Event Management\n";
    cout<<"2. User Management\n";
    cout<<"3. Send Notification\n";
    cout<<"4. Log-out\n";
    
    cout<<"Enter your choice: ";
    cin>>n;
    
    switch (n)
    {
        case 1:
            EventManagement();
            break;

        case 2:
            UserManagement();
            break;

        case 3:
            SendNotf(-1);
            break;
        
        case 4:
            cout<<"\n\nThank-you for using Any-Fiesta\n";
            break;
        
        default:
            break;
    }
}