/*Write a C program to print all alphabets from a to z. - using while loop*/

#include <iostream>
using namespace std;
int main()
{
    char i = 97;
    cout << "The alphabets from a to z are : " << endl;
    while (i <= 122)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}