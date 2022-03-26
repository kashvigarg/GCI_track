// Write a C program to count number of digits in a number.


#include <iostream>
using namespace std;
int main()
{
    int num,cnt=0,num1;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    num1=num;

    while (num>=10){
        num=num/10;
        cnt+=1;
    }

    cout << num1 << " is a " << (cnt+1) << " digit number" << endl;

    return 0;
}