//
//  main.cpp
//  perfect
//
//  Created by Raja Patel on 2/16/14.
//
//

#include <iostream>
using namespace std;

//DECLARE FUNCTION - returns true or false
bool is_perfect(long int n)
{
    int divisor;
    int sum = 0;
    for (divisor = 1; divisor < n; divisor++)
        if (n % divisor == 0 && n != divisor)
        {
            sum += divisor;
        }
    if (sum == n)
    {
        return 1;
    }
    else
        return 0;
}

//call function, prompt user indefinitely, and print response
int main()
{
    //int num;
    int n;
    do
    {
        cout << "Enter a number for perfectness:";
        cin >> n;
        int p = is_perfect(n);
        if (p == 1)
        {
            cout << "\n" << n << " is perfect" << endl;
        }
        else
            cout << "\n" << n << " is not perfect" << endl;
    } while(!cin.eof());
    cout << "Goodbye" << endl;
    
    return 0;
}