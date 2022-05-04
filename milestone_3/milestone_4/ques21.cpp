// Write a C program to find power of a number using for loop.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num,power,ans=1;
    cout<<"Enter the base/the number whose power is to be calculated:"<<endl;
    cin>>num;
    cout<<"Enter the power to be calculated:"<<endl;
    cin>>power;

    for(int i=power;i>0;i--){
        ans*=num;
    }

    cout<<"The required answer is:"<<ans;

return 0;
}