// Write a C program to check whether a number is palindrome or not.

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

    if (reverse=num1){
        cout<<num1<<" is a palindrome."<<endl;
    }
    else{
        cout<<num1<<" is not a palindrome."<<endl;
    }

    return 0;
}