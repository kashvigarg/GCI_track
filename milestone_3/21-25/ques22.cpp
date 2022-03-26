// Write a C program to find all factors of a number.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num,cnt=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        if (num%i==0){
            cout<<i <<" is a factor of "<<num<<endl;
            cnt+=1;
        }
    }

    cout<<endl<<"Thus, "<<num<<" has "<<cnt<<" factors."<<endl;
return 0;
}