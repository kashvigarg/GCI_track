/*Write a C program to print multiplication table of any number.*/


#include <iostream>
using namespace std;
int main()
{
    int i = 1, num;
    cout << "Enter the number which you want the multiplication table of:" << endl;
    cin >> num;
    for (i; i <= 10; i++)
        {cout << num << " X " << i << " = " << (num * i) << endl;}

    return 0;
}