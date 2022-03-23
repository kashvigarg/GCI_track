// Write a program to check whether a number is even or odd

#include <iostream>
using namespace std;
   
int main()
{
    cout<<"Enter a number:"<<endl;
    int num;
    cin>>num;
    if (num%2==0 || num==0){
        cout<<num<<" is even."<<endl;
    }
    else cout<<num<<" is odd."<<endl;
return 0;
}