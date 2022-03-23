// Write a program to print a maximum of two numbers

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>> a>>b;
    
    if (a>b){
        cout<<"Maximum number is:"<<a<<endl;
        }
    else cout<<"Maximum number is:"<<b<<endl;

    return 0;
}

