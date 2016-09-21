//Implementation for machine. Displays prompt and
//does input validation

#include "machine.h"
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

//Called by main function, important.
int machine()
{
    while (true) 
    {
        const string PROMPT = "> ";
        string input;
        bool allNums, strAdd;
        
        cout << PROMPT;
        getline(cin,input);
        
        //*************************//
        //  Input validation loop  //
        //*************************//

        allNums = true;
        strAdd = false;

        //Check if input is all numbers//
        for (int i = 0; i < (strlen(input.c_str())-1); i++)
            {
                if (not isdigit(input[i]))
                    {allNums = false;}
            }

        //Check if input is string "add"//

        if (input == "add") {strAdd = true;}

        //Echo message if allNums true or strAll true
        if (strAdd || allNums)
        {
            cout << input << endl;
        }
    }
    return 0;
}

