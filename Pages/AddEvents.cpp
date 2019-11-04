#include <bits/stdc++.h>
#include "header_files/Route.h"
#include "../Modules/header_files/Event.h"

using namespace std;

void Route::AddEvents()
{
    system("clear");
    cout << "\nAdd New Event\n\n";

    Event e;
    Route r;
    int currentEid = 200;
    vector<Event> eventList;

    cout << "Enter event\'s name: ";
    cin.ignore();
    getline(cin, e.name);
    cout << "\n";
    cout << "Event\'s type? \n";
    cout << "1. Individual/Solo Event\n";
    cout << "2. Team Event\n";
    cout << "Your choice: ";
    while (1)
    {
        cin >> e.type;
        if (e.type == 1)
        {
            e.max = 1;
            e.min = 1;
            break;
        }
        else if (e.type == 2)
        {
            cout << "Enter maximum members allowed\n";
            cin >> e.max;
            cout << "Enter minimum members allowed\n";
            cin >> e.min;
            break;
        }
        else
        {
            cout << "Invalid Event Type\n";
        }
    }
    cin.ignore();
    cout << "\nEnter Description of Event: ";
    getline(cin, e.description);

    int newEid;
    newEid = currentEid + 1;
    currentEid = newEid;
    e.id = newEid;

    eventList.push_back(e);

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