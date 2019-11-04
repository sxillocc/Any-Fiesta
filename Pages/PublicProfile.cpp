#include <iostream>
#include <stdlib.h>
#include<bits/stdc++.h>
#include "header_files/Route.h"
#include"../Modules/header_files/User.h"
#include"../Modules/header_files/Cred.h"
using namespace std;

void Route::PublicProfile(int id)
{
    system("clear");
    cout << endl;
    cout << "Profile\n\n";

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

    cout << "Name: "<<userList[id].name<<" \n";
    cout << "Unique Id: "<<userList[id].uid<<" \n";
    if(userList[id].gender){
        cout << "Gender: Female \n";
    }else{
        cout << "Gender: Male \n";
    }
    cout << "Phone: "<<userList[id].phone<<" \n";
    cout << "College-id: "<<userList[id].cid<<" \n";

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
                PublicProfile(id);
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}
