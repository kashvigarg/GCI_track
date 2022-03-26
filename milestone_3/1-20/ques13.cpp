// Write a C program to swap first and last digits of a number.

#include <iostream>
using namespace std;

int main()
{
    int num, i, first_digit, last_digit,num1,cnt=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;

    last_digit=num%10;
    first_digit=num;
    while (first_digit>=10){
        first_digit=first_digit/10;
        cnt+=1;
    }

    cnt+=1;
    
    last_digit=i;
    last_digit=first_digit;
    first_digit=i;

    num1=first_digit*pow(10,cnt);
    
    cout<<"The given number was: "<<num<<endl;
    cout<<"The required new number is: "<<num1<<endl;
    
    return 0;
}

