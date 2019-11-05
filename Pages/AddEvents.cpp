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
    eventList.push_back(Event(196,"Treasure Hunt",2,7,5,"All Teams have to search various items kept hidden.Various hints will be provided."));
    eventList.push_back(Event(197,"Dance Mania",2,10,8,"All Teams have to give their group dance Performances."));
    eventList.push_back(Event(198,"Essay Writing",1,1,1,"All participants will have to write an essay on a particular topic to be alloted at the time of event."));
    eventList.push_back(Event(199,"GK Quiz",2,2,2,"All teams will be asked various GK questions."));
    eventList.push_back(Event(200,"Pro Kabaddi",2,7,7,"All Teams will Kabaddi matches in a knock out tournament."));

    cout<<"Give Following Details:- \n";
    cout << "A) Event Name: ";
    cin.ignore();
    getline(cin, e.name);
    cout << "B) Event Type: \n";
    cout << "\t\t1. Individual/Solo Event\n";
    cout << "\t\t2. Team Event\n";
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
            cout << "a)Enter maximum members allowed: ";
            cin >> e.max;
            cout << "b)Enter minimum members allowed: ";
            cin >> e.min;
            break;
        }
        else
        {
            cout << "Invalid Event Type\n";
        }
    }
    cin.ignore();
    cout << "C) Event Description: ";
    getline(cin, e.description);

    int newEid;
    newEid = currentEid + 1;
    currentEid = newEid;
    e.id = newEid;

    eventList.push_back(e);
    cout<<"\nEvent added Successfully.";

    int n;
    cout << "\n\n1. Back\n";
    cout << "2. Exit\n";
    cout<<"3. Show List(TODO- for test purpose || Remove later)\n";
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
    
    case 3:
        ViewEvents();
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