// Write a C program to enter a number and print its reverse.

#include <iostream>
using namespace std;

int main()
{
    int num, reverse, num1;
    cout << "Enter any number:" << endl;
    cin >> num;
    num1=num;
    while(num != 0)
    {
        
        reverse = (reverse * 10) + (num % 10);

        
        num /= 10;
    }

    cout<<reverse<<" is the reversed form for "<<num1<<endl;

    return 0;
}