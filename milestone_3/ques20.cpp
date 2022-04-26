// Write a C program to print all ASCII character with their values.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    for(int i=0;i<256;i++){
        cout<<"The ASCII character for value "<<i<<" is "<<char(i)<<endl;
    }
return 0;
}