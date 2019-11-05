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
    eventList.push_back(Event(196,"Treasure Hunt",2,7,5,"All Teams have to search various items kept hidden.Various hints will be provided."));
    eventList.push_back(Event(197,"Dance Mania",2,10,8,"All Teams have to give their group dance Performances."));
    eventList.push_back(Event(198,"Essay Writing",1,1,1,"All participants will have to write an essay on a particular topic to be alloted at the time of event."));
    eventList.push_back(Event(199,"GK Quiz",2,2,2,"All teams will be asked various GK questions."));
    eventList.push_back(Event(200,"Pro Kabaddi",2,7,7,"All Teams will Kabaddi matches in a knock out tournament."));
    if (eventList.size() == 0)
    {
        cout << "No Events added yet" << endl;
        cout << "You want to Add New Event ?:(y/n)";
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
            cout << "Event ID : " << eventList[i].id << endl;
            cout << "Event Name : " << eventList[i].name << endl;
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
