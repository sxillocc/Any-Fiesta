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
    cout<<"1. Events Management\n";
    cout<<"2. User Management\n";
    cout<<"3. Result\n";
    cout<<"4. Send Notification\n";
    
    cout<<"Enter your choice: ";
    cin>>n;
    
    switch (n)
    {
        case 1:
            /* code */
            break;

        case 2:
            UserManagement();
            break;

        case 3:
            /* code */
            break;
        
        case 4:
            SendNotf(-1);
            break;
        
        default:
            break;
    }
}