// Write a C program to find HCF (GCD) of two numbers.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num1,num2,hcf=1,minimum;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number:"<<endl;
    cin>>num2;
    if (num1>num2){
        minimum=num2;
    }
    else{
        minimum=num1;}
    
    for (int i=1; i<=minimum; i++){
            if ((num1%i==0) && (num2%i==0)){
                hcf=i;
            }
        }


    cout<<"The HCF of "<<num1<<" and "<<num2<<" is "<<hcf;

return 0;
}