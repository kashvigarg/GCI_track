// Write a C program to check whether a number is Armstrong number or not.

/*
An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits. For example -
6 = 6^1 = 6
371 = 3^3 + 7^3 + 1^3 = 371
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num, n, sum=0, count=0;
    cout<<"Enter number to be checked:"<<endl;
    cin>>num;
    n=num;
    int ans=num;
    int arr[10];
    while (num>0)
    {
        n=num%10;
        arr[count]=n;
        num=num/10;  
        count++;
    }

    cout<<count<<endl;

    for (int i=0; i<count; i++){
        sum+=pow(arr[i], count);
    }
    cout<<sum<<endl;
    if (ans==sum){
        cout<<ans<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<ans<<" is not an Armstrong number."<<endl;
    }
    

return 0;
}