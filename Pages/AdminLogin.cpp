#include<iostream>
#include<stdlib.h>
#include"header_files/Route.h"
using namespace std;

#define pass "admin"

void Route::AdminLogin(){
    
    system("clear");
    cout<<"\n";
    
    string p;
    
    cout<<"Admin Login\n\n";
    cout<<"Please Enter Admin Password: ";
    cin>>p;
    
    if(p == pass){
        AdminHomePage();
    }else{
        cout<<"Incorrect Password"<<endl;
        char x;
        cout<<"Want to try again ? (y/n)";
        cin>>x;
        switch (x)
        {
        case 'y':
            AdminLogin();
            break;
        case 'n':
            cout<<"\n\nThank-you for using Any-Fiesta\n";
            break;
        
        default:
            system("clear");
            cout<<"\nInvalid Choice\n";
            cout<<"\nThank-you for using Any-Fiesta\n";
            break;
        }
    }
}
