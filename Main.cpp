#include<iostream>
#include<stdlib.h>
#include"Pages/header_files/Route.h"
using namespace std;

void greetingAndChoices(){
    system("clear");
    cout<<"\nWelcome to Any-Fiesta\n\n";
    cout<<"1. Admin Portal\n2. Public Portal\n3. Exit\n";
}

int main(){
    int n = 0;
    Route r;
    
    greetingAndChoices();
    
    cout<<"Enter Your Choice: ";
    cin>>n;

    switch(n)
    {
        case 1:
            r.AdminLogin();
            break;
        case 2:
            r.PublicHomePage();
            break;
        case 3:
            cout<<"\n\nThank-you for using Any-Fiesta\n";
            break;
        
        default:
            cout<<"\n\nSorry, Invalid Choice\n";
            cout<<"Thank-you for using Any-Fiesta\n";
            break;
    }
    return 0;
}