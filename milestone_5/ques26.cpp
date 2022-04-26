// Write a C program to check whether a number is Prime number or not.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num,condition=1;
    cout<<"Enter a number to be checked:"<<endl;
    cin>>num;
    for (int i=2;i<(num/2);i++){
        if ((num%i)==0){
            condition=0;
            
        }
        else {
            
            continue;
        }
    }

    if (condition==1){
        cout<<num<<" is a prime number."<<endl;
    }
    else{
        cout<<num<<" is not a prime number."<<endl;

    }


return 0;
}