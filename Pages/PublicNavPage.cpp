#include <iostream>
#include <stdlib.h>
#include "header_files/Route.h"
using namespace std;

void log_out();

void Route::PublicNavPage()
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
        PublicProfile();
        break;

    case 2:
        EventReg();
        break;

    case 3:
        PublicNotf();
        break;

    case 4:
        log_out();
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
                PublicNavPage();
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}

void log_out()
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
        r.PublicNavPage();
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
                r.PublicNavPage();
            }
            if(choice == 'n'){
                cout << "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }
}