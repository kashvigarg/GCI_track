/*Write a C program to find sum of all natural numbers between 1 to n.*/


#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0, num;
    cout << "Enter the number till you which want the sum of numbers to be calculated:" << endl;
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "The sum is: " << sum << endl;

    return 0;
}