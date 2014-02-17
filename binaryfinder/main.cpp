//
//  main.cpp
//  binaryfinder
//
//  Created by Raja Patel on 2/15/14.
//
//

#include <iostream>
using namespace std;

int main()
{
    //instantiate variables
    int decimal;
    int binary;
    int var = 1; //
    int var2 = 1;//
    int thing; // decimal to binary value placed into intarray & binary values into barray
    int bin_list[32]; //max integer size computer can read (both arrays)
    int dec_list[32];
    int bin_counter = 0; //finds length of binary value
    int dec_counter = 0; //finds length of decimal value (in binary)
    int adder = 0;
    
    //prompt user and take in input values
    cout << "---BINARY FINDER---" << "\n" << "Enter your decimal value, then binary value: ";
    cin >> decimal >> binary;
    
    //error check for negative inputs... invalid binary check will be done later in code
    if (decimal < 0)
    {
        cout << "Number must be positive." << endl;
    }
    else if (binary < 0)
    {
        cout << "Number must be positive."<< endl;
    }
    
    
    // divide the binary input by 10 and store the modular result in a new array
    // this provides a single digit element for each value of the binary input
    
    
    //convert decimal to binary, then transfer new number to array for comparison loop
    var2 = decimal;
    while (var2 != 0)
    {
        thing = var2 % 2;
        var2 = var2 / 2;
        dec_list[dec_counter] = thing;
        dec_counter = dec_counter + 1;
    }
    //transfer binary values into binary array for comparison loop
    var = binary;
    while (var != 0)
    {
        thing = var % 10;
        var = var / 10;
        bin_list[bin_counter] = thing;
        bin_counter = bin_counter + 1;
    }
    
    //error check for invalid binary input
    for (int X = 0; X < bin_counter; X++)
    {
        if (bin_list[X] > 1)
        {
            cout << "Sequence must be binary." << endl;
        }
    }
    
    //loop for finding binary digits in the decimal number (converted into binary, of course)
    for (int i = 0; i < dec_counter; i++) //loops through length of entire decimal list
    {
        if (bin_list[0] == dec_list[i]) //checks first binary digit with all of decimal digits
        {
            
            for (int j = 0; j < bin_counter; j++) //loops thru length of entire binary list
            {
                if (bin_list[j] == dec_list[(j+i)])
                {
                    adder = adder + 1; //counts how many binary digits was in decimal
                }
            }
            if (adder == bin_counter) //if binary digits = length of binary list, print..
            {
                
                cout << "Sequence " << binary << " occurs in " << decimal << endl;
            }
            else
                cout << "Sequence " << binary << " does not occur in " << decimal << endl;
            exit(0); // stops last if statement from printing multiple times
        }
    }
    return 0;
}