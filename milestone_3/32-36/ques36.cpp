// Write a C program to print Fibonacci series up to n terms.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int fibb(int n){
    int num,t1=0,t2=1;
    for (int i=1;i<=n;i++){
        if (i==1){
            num=t1;
            cout<<num<<endl;

        }
        else if(i==2){
            num=t2;
            cout<<t2<<endl;
        }
        else{
            num=t1+t2;
            cout<<num<<endl;
            t1=t2;
            t2=num;
        }
    }
return 0;
}
   
int main()
{
    int terms;
    cout<<"Enter the terms for the Fibonacci series:"<<endl;
    cin>>terms;

    fibb(terms);

return 0;
}

