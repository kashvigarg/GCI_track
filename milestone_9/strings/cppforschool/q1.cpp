/*
1. Write a program to find the length of string
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    int len;
    for (int i=0; s[i]!= '\0'; i++){
        len++;
            }

        cout<<"Length is: "<<len;
return 0;
}