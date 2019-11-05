#include <bits/stdc++.h>
#include "header_files/Route.h"
#include "../Modules/header_files/Event.h"

using namespace std;

void Route::EventManagement()
{
    system("clear");
    cout << "\nWelcome to Event Management\n\n";
    int n;

    cout << "1. Add New Event\n";
    cout << "2. View Events\n";
    cout << "3. Back\n";
    cout<<"4. Exit\n";
    cout << "Enter Your Choice: ";
    cin >> n;
    cout << "\n";
    switch (n)
    {
    case 1:
        AddEvents();
        break;
    case 2:
        ViewEvents();
        break;
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

            if (choice == 'y')
            {
                EventManagement();
            }
            if (choice == 'n')
            {
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}

