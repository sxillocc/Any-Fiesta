#include <iostream>
#include <stdlib.h>
#include "header_files/Route.h"
using namespace std;

void Route::PublicHomePage()
{
    system("clear");
    cout << endl;

    cout << "Public Portal\n\n";
    cout << "1. Login\n";
    cout << "2. .....\n";
    cout << "3. .....\n";
    cout << "4. .....\n";

    int n;
    Route r;
    cout << "Enter Your Choice: ";
    cin >> n;

    switch (n)
    {
    case 1:
        r.PublicLogin();
        break;

    default:
        break;
    }
}