#include <iostream>
#include <stdlib.h>
#include "header_files/Route.h"
using namespace std;

void log_out(int);

void Route::PublicNavPage(int id)
{
    int n;
    Route r;

    system("clear");
    cout << endl;

    cout << "Public Navigation Menu\n\n";
    cout << "1. Profile\n";
    cout << "2. Register for Events\n";
    cout << "3. Notification\n";
    cout << "4. Log-out\n";

    cout << "Enter Your Choice: ";
    cin >> n;

    switch (n)
    {
    case 1:
        PublicProfile(id);
        break;

    case 2:
        EventReg(id);
        break;

    case 3:
        PublicNotf(id);
        break;

    case 4:
        log_out(id);
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
                PublicNavPage(id);
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}

void log_out(int id)
{
    char choice;
    Route r;
    system("clear");
    cout << "\n";

    cout << "Are you sure you want to log-out? ";
    cin >> choice;
    switch (choice)
    {
    case 'y':
        r.PublicHomePage();
        break;

    case 'n':
        r.PublicNavPage(id);
        break;

    default:
        while (1)
        {
            char choice;
            Route r;
            system("clear");
            cout << endl;

            cout << "Invalid Choice" << endl;
            cout << "Want to try again ? (y/n) ";
            cin >> choice;

            if(choice == 'y'){
                r.PublicNavPage(id);
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}