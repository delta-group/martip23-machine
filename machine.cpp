//Implementation for machine. Displays prompt and
//does input validation

#include "store.h"
#include "calculator.h"

#include <iostream>  //For IO
#include <cstring>   //For strlen
#include <cstdlib>   //For stoi
#include <cctype>    //for isdigit
using namespace std;

//Called by main function, important.
int machine()
{
    while (true) 
    {
        const string PROMPT = "> ";
        string input;
        int tempInt;
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
        
        //If allNums then 
        if (allNums)
        {
            tempInt = atoi(input.c_str());
            write(tempInt);
            cout << tempInt << endl;
        }

        //Echo message str = "add"
        if (strAdd)
        {
            cout << add() << endl;
        }
    }
    return 0;
}

