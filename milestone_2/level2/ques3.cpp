/*3.A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, n, i, rev_num = 0;
    cout << "Enter any 4-digit number:" << endl;
    cin >> num;
    for (i = 1; i <= 4; i++)
    {
        n = num % 10;
        num = num / 10;
        rev_num += (n * pow(10, (4 - i)));
    }
    cout << "The reversed number is: " << rev_num << endl;
}