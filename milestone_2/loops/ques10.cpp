/*Write a C program to count number of digits in a number.*/


#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, num,num1, j = 0;
    cout << "Enter any number:" << endl;
    cin >> num;
    num1=num;
    while (1)
    {
        num = num / 10;
        j++;
        if (num == 0)
            break;
    }
    cout << num1 << " is a " << j << " digit number" << endl;

    return 0;
}