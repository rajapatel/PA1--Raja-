//
//  main.cpp
//  consecutive
//
//  Created by Raja Patel on 2/15/14.
//
//

#include <iostream>
using namespace std;

int main()
{
    //instantiate variables, constants, and arrays
    const int LIST = 15;
    int NUM[LIST];
    //prompt user and loop user input into console till EOF occurs
    do
    {
        cout << "Enter your integers one by one (exit by EOF): " << endl;
        for (int i = 0; i < LIST; i++)
        {
            cin >> NUM[i];
        }
    } while (!cin.eof());
    //detect 4 consecutive integers
    for (int i = 0; i < LIST - 3; i++)
    {
        if ((NUM[i+1]-NUM[i]) == (NUM[i+2]-NUM[i+1]) == (NUM[i+3]-NUM[i+2]))
        {
            cout << "Quadruplet detected: "<< NUM[i]<<" "<< NUM[i+1]<<" "<< NUM[i+2]<<" "<<NUM[i+3]<<endl;
        }
    }
    return 0;
}




