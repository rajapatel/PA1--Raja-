//
//  main.cpp
//  divisorsum
//
//  Created by Raja Patel on 2/16/14.
//
//

#include <iostream>
using namespace std;
int main()
{
//instantiate variables
    int number;
    int divisor;
    int sum = 0;
//Adds divisors of each integer from 2 to 1000, using a loop
    for (number = 2; number < 1000; number++)
        for (divisor = 1; divisor < number; divisor++)
            if (number % divisor == 0 && number != divisor)
            {
                sum += divisor; //better way of writing sum = sum + divisor
                cout << sum << endl;
            }
    return 0;
}

