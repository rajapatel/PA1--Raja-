//
//  main.cpp
//  multibase
//
//  Created by Raja Patel on 2/16/14.
//
//

#include <iostream>
using namespace std;
/////////////////////////////////////////
/* ACKNOWLEDGMENT
 Code to find the palidromicity for different bases was partly based on a textbook example in the book (page 189) and a website: www.lifengadget.com */
/////////////////////////////////////////
int main()
{
    //instantiate variables
    int input;
    int VAR;
    int quotient;
    int reverse_in;
    
    //prompt user
    cout << "Enter the number to test for palindromicity:";
    cin >> input;
    VAR = input; //make input retain value
    
    
    // check for all palidrome bases of user input
    for (int i = 2; i < input; i++)
    {
        while(VAR > 0)
        {
            quotient = VAR % i;
            VAR = VAR / i;
            reverse_in = reverse_in * i + quotient;
            if(reverse_in == input)
            {
                cout << i << endl;
            }
        }
        
        VAR = input;
        reverse_in = 0;
    }
    return 0;
}