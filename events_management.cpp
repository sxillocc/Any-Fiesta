#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int currentEid = 200;
class Event{
  public:
    string event_name,description;
    int event_id,type,max_members;
};
void Events();
vector<Event> eventList;

void Add_events(){
   Event e;
   cout<<"Enter event\'s name\n";
   cin.ignore();
   getline(cin,e.event_name);
   cout<<"Event\'s type?\n";
   cout<<"1. Individual/Solo Event\n";
   cout<<"2. Team Event\n";
   while(1){
      cin>>e.type;
      if(e.type == 1){
          e.max_members = 1;
          break;
      }
      else if(e.type == 2){
          cout<<"Enter maximum members allowed\n";
          cin>>e.max_members;
          break;
      }
      else{
         cout<<"Invalid Event Type\n";
      }
   }
   cin.ignore();
   cout<<"Enter Description of Event\n";
   getline(cin,e.description);
    int newEid;
    newEid = currentEid + 1;
    currentEid = newEid;
    e.event_id = newEid;
   eventList.push_back(e);
   cout<<endl;
   Events();
}

void View_events(){
    cout<<"Events\n\n";
    if(eventList.size() == 0){
        cout<<"No Events added yet"<<endl;
        cout<<"ADD NOW ?? (y/n)";
        char choice;
        cin >> choice;

            if(choice == 'y'){
                Add_events();
            }
            if(choice == 'n'){
                cout<< "\n\nThank-you for using Any-Fiesta\n";
            }
    }
  else{
   for(int i=0;i<eventList.size();i++){
       cout<<i+1<<".\n";
       cout<<"Event : "<<eventList[i].event_name<<endl;
       cout<<"Event ID : "<<eventList[i].event_id<<endl;
       cout<<"Event Type : ";
       if(eventList[i].type == 1){
          cout<<"Solo Event"<<endl;
       }
       else if(eventList[i].type == 2){
          cout<<"Team Event"<<endl;
       }
       cout<<"Maximum members allowed : "<<eventList[i].max_members<<endl;
       cout<<"Description : "<<eventList[i].description<<endl;
   }
  }
  Events();
}

void Events(){
    cout<<endl;
    int n;

  cout<< "1. Add New Event\n";
  cout<< "2. View Events\n";
  cout<< "3. Exit\n";
  cout<< "Enter Your Choice: ";
    cin >> n;
  cout<<"\n";
    switch (n)
    {
    case 1:
        Add_events();
        break;
    case 2:
        View_events();
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

            cout<< "Invalid Choice" << endl;
            cout<< "Want to try again ? (y/n) ";
            cin >> choice;

            if(choice == 'y'){
                Events();
            }
            if(choice == 'n'){
                cout<< "\n\nThank-you for using Any-Fiesta\n";
                break;
            }
        }
        break;
    }


}
int main(){
    cout<< "\nWelcome to Events Page\n\n";
   Events();
return 0;
}
