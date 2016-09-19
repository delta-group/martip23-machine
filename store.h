//store.h - Implementation for store.cpp
//Write a value to an array for short-term storage

#include <cstdlib>

const MAX_SIZE = 10;
position = 0;
int allNums[MAX_SIZE] = {0};

int write(string input)
{
    //If overflow, return 1, do not write
    if (position > 9) {return 1}

    else 
    {
        allNums[position] = atoi(input);
        position++;

        return 0;
    }
}

int read()
{
    if (position == 0) { return -1 }
    else 
    { 
        position--;
    return allNums[position] 
    }
}
