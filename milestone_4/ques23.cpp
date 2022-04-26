// Write a C program to calculate factorial of a number.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int fac=1,num;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    for (int i=num; i>0;i--){
        fac*=i;
    }

    cout<<"The factorial of "<<num<<" is "<<fac<<endl;


return 0;
}