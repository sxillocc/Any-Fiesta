#include <bits/stdc++.h>
#include "header_files/Route.h"
#include "../Modules/header_files/Event.h"

using namespace std;

void Route::ViewEvents()
{
    system("clear");
    cout << "\nEvents List\n\n";
    Route r;
    vector<Event> eventList;
    if (eventList.size() == 0)
    {
        cout << "No Events added yet" << endl;
        cout << "ADD NOW ?? (y/n)";
        char choice;
        cin >> choice;

        if (choice == 'y')
        {
            AddEvents();
        }
        if (choice == 'n')
        {
            cout << "\n\nThank-you for using Any-Fiesta\n";
        }
    }
    else
    {
        for (int i = 0; i < eventList.size(); i++)
        {
            cout << i + 1 << ".\n";
            cout << "Event : " << eventList[i].name << endl;
            cout << "Event ID : " << eventList[i].id << endl;
            cout << "Event Type : ";
            if (eventList[i].type == 1)
            {
                cout << "Solo Event" << endl;
            }
            else if (eventList[i].type == 2)
            {
                cout << "Team Event" << endl;
            }
            cout << "Maximum members allowed : " << eventList[i].max << endl;
            cout << "Minimum members allowed : " << eventList[i].min << endl;
            cout << "Description : " << eventList[i].description << endl;
        }
        int n;
        cout << "\n\n1. Back\n";
        cout << "2. Exit\n";
        cout << "Enter your Choice: ";
        cin >> n;

        switch (n)
        {
        case 1:
            r.EventManagement();
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

                if (choice == 'y')
                {
                    r.EventManagement();
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
}
