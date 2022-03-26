// Write a C program to find first and last digit of a number.

#include <iostream>
using namespace std;

int main()
{
    int num, i, first_digit, last_digit;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    last_digit=num%10;
    first_digit=num;
    while (first_digit>=10){
        first_digit=first_digit/10;
    }
    
    
    cout<<"The first digit of the number is: "<<first_digit<<endl;
    cout<<"The last digit of the number is: "<<last_digit<<endl;
    
    return 0;
}

