//Machine.h holds the program to be called by HelloWorld.
//Will return an int to inform of error state or success.

#include <iostream>
#include <string>
using namespace std;

int machine ()
{
    bool proceed = true;
    string message = "";

    while (proceed) 
    {
        cout << "> ";
        getline(cin,message);
        cout << message << endl;
    }

    return 0;
}
