#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include "header_files/Route.h"
#include "../Modules/header_files/User.h"
#include "../Modules/header_files/Cred.h"
using namespace std;

void Route::PublicLogin()
{
    system("clear");
    cout << endl;

    cout << "Public Login \n\n";

    vector<Cred> loginList;
    //TODO-- Load data from login files...
    loginList.push_back(Cred(3090, "shaktiraj"));
    loginList.push_back(Cred(3091, "ajay"));
    loginList.push_back(Cred(3092, "yash"));
    loginList.push_back(Cred(3093, "rahul"));
    loginList.push_back(Cred(3094, "laxman"));
    loginList.push_back(Cred(3095, "piyush"));
    loginList.push_back(Cred(3096, "nitesh"));
    loginList.push_back(Cred(3097, "priyal"));
    loginList.push_back(Cred(3098, "paras"));
    loginList.push_back(Cred(3099, "monika"));
    loginList.push_back(Cred(4000, "priya"));

    //Take id
    int id;
    cout << "Your Unique ID: ";
    cin >> id;
    id = id - 3090;

    //Take Password
    string pass;
    cout << "Your Password: ";
    cin >> pass;

    //TODO-- CHECK IF CORRECT PASSWORD OR NOT
    if (pass == loginList[id].getPass())
    {
        PublicNavPage(id);
    }
    else
    {
        char choice;
        system("clear");
        cout << endl;

        cout << "Invalid Password" << endl;
        cout << "Want to try again ? (y/n) ";
        cin >> choice;

        if (choice == 'y')
        {
            PublicLogin();
        }
        else
        {
            cout << "\n\nThank-you for using Any-Fiesta\n";
        }
    }
}