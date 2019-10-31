#include <iostream>
#include <stdlib.h>
#include "header_files/Route.h"
using namespace std;

void Route::PublicProfile()
{
    system("clear");
    cout << endl;
    cout << "Profile\n\n";
    int n;

    cout << "Name: Shaktiraj Daudra \n";
    cout << "Unique Id: 5321 \n";
    cout << "Gender: Male \n";
    cout << "Phone: 7359802004\n";
    cout << "College id: 2018kucp1092\n";

    cout << "\n\n1. Back\n";
    cout << "2. Exit\n";
    cout << "Enter your Choice: ";
    cin >> n;

    switch (n)
    {
    case 1:
        PublicNavPage();
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
