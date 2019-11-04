#include <iostream>
#include <stdlib.h>
#include "header_files/Route.h"
using namespace std;

void Route::PublicHomePage()
{
    int n;
    Route r;

    system("clear");
    cout << endl;

    cout << "Public Portal\n\n";
    cout << "1. Login\n";
    cout << "2. Register\n";
    cout << "3. Forgot Password\n";
    cout << "4. Exit\n";

    cout << "Enter Your Choice: ";
    cin >> n;

    switch (n)
    {
    case 1:
        r.PublicLogin();
        break;
    case 2:
        r.PublicRegister();
        break;
    case 3:
        r.ForgetPass();
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
