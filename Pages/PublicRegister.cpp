//TODO--  Make an Array of Users..
//TODO-- Add New User into Array..
//TODO-- Later, Store and Fetch that array from file

#include<iostream>
#include<string>
#include"header_files/Route.h"
using namespace std;
#include "../Modules/header_files/User.h"
#include "../Modules/header_files/Cred.h"

int currentUid = 4000;

void Route::PublicRegister(){
    system("clear");
    cout<<endl;
    cout<<"\nRegistration\n\n";

    string pass;
    User user;
    string name;
    cin.ignore();
    cout<<"Your Name ? ";
    getline(cin,name);
    cout<<"Password: (No White Space)";
    cin>>pass;
    cout<<"Your Phone Number ? ";
    cin>>user.phone;
    cout<<"Your College id ? ";
    cin>>user.cid;
    cout<<"Gender ?(0 = Male, 1 = Female)";
    cin>>user.gender;
    cout<<"\n\nYour favorite color ?\n(this question will help us to identify you when you forget your password): ";
    cin>>user.color;

    int newUid;
    //TODO-- Load Uid from uid-track-file into global "currentUid" variable.
    newUid = currentUid + 1;
    currentUid = newUid;
    user.uid = newUid;
    Cred credential(user.uid,pass);
    user.credential = credential;
    cout<<"\n\nYour Unique Id is: "<<newUid<<endl;
    cout<<"Make sure to note your Unique Id, It can't be recover if you forget;"<<endl;
    cout<<endl<<"--------------------------------------\nYou have Successfully Registered\n";
    //TODO-- Write new Uid into files;

    //control flow of pages;;;
    int n;
    cout << "\n\n1. Back\n";
    cout << "2. Exit\n";
    cout << "Enter your Choice: ";
    cin >> n;

    switch (n)
    {
    case 1:
        PublicHomePage();
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
                PublicProfile();
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}
