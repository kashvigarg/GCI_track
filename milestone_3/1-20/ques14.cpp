// Write a C program to calculate sum of digits of a number.


#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,num1,j;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    num1=num;

    j=num%10;
    sum=j;

    while (j>=0){
        num=num/10;
        j=num%10;
        sum+=j;
    }

    cout << sum << " is the sum of digits of " << num1 << endl;

    return 0;
}