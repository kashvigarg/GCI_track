// Write a C program to enter a number and print it in words.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   









   // -------------- to be worked on -----------
int main()
{
    int num;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<"Enter a number:"<<endl;
    cin>>num;

    for (int i=num; num>0; num=num/10){
        i=i%10;

    }

return 0;
}