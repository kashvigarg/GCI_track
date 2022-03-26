// Write a C program to find LCM of two numbers.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num1,num2,lcm,maxim;

    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number:"<<endl;
    cin>>num2;
    if (num1>num2){
        maxim=num1;
    }
    else{
        maxim=num2;}

    for (int i=maxim; i>0; i+=maxim){
        if ((i%num1==0) && (i%num2==0)){
            lcm=i;
            break;

        }

        else continue;

    }

    cout<<"The LCM of "<<num1<<" and "<<num2<<" is "<<lcm<<endl;
    return 0;
}
