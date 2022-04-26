// Write a C program to calculate sum of digits of a number.


#include <iostream>
using namespace std;
int main()
{
    int num, n, sum = 0,num1;
    
    cout << "Enter any number " << endl;
    cin >> num;

    num1=num; 
    while (1)
    {
        n = num % 10;
        sum = sum + n;
        num = num / 10;
        if (num == 0)
            break;
    }

    cout << sum << " is the sum of digits of " << num1 << endl;

    return 0;
}