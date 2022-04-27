/*
49th question from the following link 
https://www.w3resource.com/cpp-exercises/for-loop/index.php

Write a program in C++ to print a pyramid of digits as shown below for n number of lines. 
here, rows=5
    1                                                                                                         
   232                                                                                                        
  34543                                                                                                       
 4567654                                                                                                      
567898765
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n;
    cout<<"Enter number of rows: "<<endl;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=0; j<n-i; j++){
            cout<<" ";
        }
        for (int j = i; j < 2 * i - 1; j++)
           { cout << j;}
        for (int p = 2 * i - 1; p> i - 1; p--)
           { cout << p;}
        cout<<endl;

        
    }
return 0;
}