/*Write a C program to print all natural numbers from 1 to n. - using while loop*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1, num;
    cout << "Enter the numbers till which you want the natural numbers to be printed:" << endl;
    cin >> num;
    cout << "The natural numbers till " << num << " are : " << endl;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}