//Calculator so far only holds the ADD function

#include "store.h"
// #include <iostream>
using namespace std;

int add()
{
    int num1 = read();
    int num2 = read();
    int sum = num1 + num2;

//    cout << "Num 1 = " << num1 << endl;
//    cout << "Num 2 = " << num2 << endl;

    write(sum);
    return(sum);
}
