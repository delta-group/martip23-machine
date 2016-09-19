//Machine.h holds the program to be called by HelloWorld.
//Will return an int to inform of error state or success.

#include <iostream>
#include <cstring>
#include <string>
#include <store.h>
#include <calculator.cpp>
using namespace std;

int machine ()
{
    bool proceed = true; //Option to continue or end program
    string input = ""; //Holds input
    int numinput = 0; //Holds int after conversion
    bool allNums = true; //Flag to determine if input is all numbers
    bool strAdd = false;


    while (proceed) //Message I/O loop
    {
        cout << "> ";
        getline(cin,input);
        
        //**************************//
        //  Input validation loop   //
        //**************************//
        allNums = true;
        strAdd = false;

        //Check if input is all numbers//
        for (int i = 0; i < (strlen(input.c_str())-1); i++)
        {
            if (input[i] == '0' || input[i] == '1' || input[i] == '2' || 
                input[i] == '3' || input[i] == '4' || input[i] == '5' || 
                input[i] == '6' || input[i] == '7' || input[i] == '8' ||
                input[i] == '9'); 

            else {allNums = false;}
        }

        //Check if input is string all//
        if (input == "add") {strAdd = true;}
        
        //Echo message if allNums true or strAll true
        if (strAdd || allNums){ 
             cout << "Input = " << input << endl;
        }
//        else ()
//        {
//            cout << "Invalid entry detected
//        }
    }

    return 0;
}
