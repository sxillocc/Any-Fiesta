#include <iostream>
#include<bits/stdc++.h>
#include <stdlib.h>
#include "header_files/Route.h"
#include "../Modules/header_files/User.h"
#include "../Modules/header_files/Cred.h"
using namespace std;

void showCompleteList(vector<User>);
string userDetail(int,vector<User>);

void Route::UserManagement()
{
    int n;
    Route r;

    system("clear");
    cout << endl;

    //TODO-- Initialize UserList from file.. later;
    vector<User> userList;
    userList.push_back(User(3090,"Shaktiraj Daudra", "7359802004", "2018kucp1092",Cred(3090,"shaktiraj"),0,"blue"));
    userList.push_back(User(3091,"Ajay Sharma", "7231994697", "2018kucp1087",Cred(3091,"ajay"),0,"green"));
    userList.push_back(User(3092,"Yash Singh", "8005860729", "2018kucp1088",Cred(3092,"yash"),0,"yellow"));
    userList.push_back(User(3093,"Rahul Singh Tanwar", "9521464527", "2018kucp1043",Cred(3093,"rahul"),0,"blue"));
    userList.push_back(User(3094,"Laxman Sharma", "9549404162", "2018kucp1056",Cred(3094,"laxman"),0,"pink"));
    userList.push_back(User(3095,"Piyush Agrawal", "7317425791", "2018kucp1065",Cred(3095,"piyush"),0,"orange"));
    userList.push_back(User(3096,"Nitesh Meena", "9351308410", "2018kucp1070",Cred(3096,"nitesh"),0,"blue"));
    userList.push_back(User(3097,"Priyal Bansal", "9735667239", "2018kucp1118",Cred(3097,"priyal"),0,"purple"));
    userList.push_back(User(3098,"Paras Mal", "8003955012", "2018kuec2012",Cred(3098,"paras"),0,"red"));
    userList.push_back(User(3099,"Monika", "9544368385", "2018kucp1111",Cred(3099,"monika"),1,"pink"));
    userList.push_back(User(4000,"Priya", "8005777302", "2018kucp1112",Cred(4000,"priya"),1,"blue"));

    cout << "User Management\n\n";
    cout << "1. User List\n";
    cout << "2. Search User\n";
    cout << "3. Go Back\n";
    cout << "4. Exit\n";

    cout << "Enter Your Choice: ";
    cin >> n;

    switch (n)
    {
    case 1:
        system("clear");
        showCompleteList(userList);
        break;
    case 2:
        int uid;
        cout<<"\nGive id to be searched: ";
        cin>>uid;
        uid = uid - 3090;
        if(uid>=0 and uid<userList.size()){
            UserSearch(uid);
            break;
        }else{
            while (1)
        {
            char choice;
            system("clear");
            cout << endl;

            cout << "Invalid Choice" << endl;
            cout << "Want to try again ? (y/n) ";
            cin >> choice;

            if(choice == 'y'){
                r.UserManagement();
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
            break;
        }
    case 3:
        AdminHomePage();
        break;
    case 4:
        cout << "\n\nThank-you for using Any-Fiesta\n";
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
                PublicHomePage();
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}

void showCompleteList(vector<User> userList){
    cout << endl<< "User List"<<endl<<endl;

    for(int i=0;i<userList.size();i++){
        cout<<userDetail(i,userList)<<endl;
    }

    int n;
    cout << "\n\n1. Back\n";
    cout << "2. Exit\n";
    cout << "Enter your Choice: ";
    cin >> n;
    Route r;

    switch (n)
    {
    case 1:
        r.UserManagement();
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
                r.UserManagement();
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}

string userDetail(int i, vector<User> userList){
    return "Name: " + userList[i].name + "\nUnique Id: " +
           to_string(userList[i].uid) + "\nPhone: " + userList[i].phone + "\nCollege-id: " + userList[i].cid+" \n";
}