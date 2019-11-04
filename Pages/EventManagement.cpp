#include <bits/stdc++.h>
#include "header_files/Route.h"
#include "../Modules/header_files/Event.h"

using namespace std;

void Route::EventManagement()
{
    system("clear");
    cout << "\nWelcome to Events Page\n\n";
    cout << endl;
    int n;

    cout << "1. Add New Event\n";
    cout << "2. View Events\n";
    cout << "3. Exit\n";
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

