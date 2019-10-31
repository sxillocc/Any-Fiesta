#include<iostream>
#include<stdlib.h>
#include"header_files/Route.h"
using namespace std;
#define pass "admin"

void Route::AdminLogin(){
    
    system("clear");
    cout<<"\n";
    
    Route r;
    string p;
    
    cout<<"Welcome to Admin Portal!\n\n";
    cout<<"Please Enter Admin Password: ";
    cin>>p;
    
    if(p == pass){
        r.AdminHomePage();
    }else{
        cout<<"Invalid Password"<<endl;
        char x;
        cout<<"Want to try again ? (y/n)";
        cin>>x;
        switch (x)
        {
        case 'y':
            r.AdminLogin();
            break;
        case 'n':
            cout<<"\n\nThank-you for using Any-Fiesta\n";
            break;
        
        default:
            cout<<"\n\nInvalid Choice\n";
            break;
        }
    }
}
