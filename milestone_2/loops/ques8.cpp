/*Write a C program to find sum of all odd numbers between 1 to n.*/

#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, sum = 0;
    cout << "Enter the number till which you want the sum to be calculated: " << endl;
    cin >> n;
    for (i; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    cout << "The sum is " << sum << endl;

    return 0;
}