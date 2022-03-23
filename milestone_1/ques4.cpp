// Write a program to check whether a number is negative, zero, positive

#include <iostream>
using namespace std;
   
int main()
{
    cout<<"Enter a number:"<<endl;
    int num;
    cin>>num;
    if (num>0){
        cout<<num<<" is positive."<<endl;
    }
    else if (num==0) {
        cout<<num<<" is zero."<<endl;} 
    else cout <<num<<" is negative."<<endl;
return 0;
}