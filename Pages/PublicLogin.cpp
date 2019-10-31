#include <iostream>
#include <stdlib.h>
#include "header_files/Route.h"
using namespace std;

void Route::PublicLogin()
{
    system("clear");
    cout << endl;

    cout << "Public Login \n\n" ;

    //Take id
    int id;
    cout << "Your Unique ID: ";
    cin >> id;

    //Take Password
    int pass;
    cout << "Your Password: ";
    cin >> pass;

    //TODO-- CHECK IF CORRECT PASSWORD OR NOT
    //TODO-- TRUE: NAVIGATE TO PUBLIC-HOMEPAGE
    //TODO-- FALSE: HANDLE INVALIDE CALL

    //TODO-- REMOVE THIS LINES LATER-----
    Route r;
    r.PublicNavPage();
    //-----------------------------------
}