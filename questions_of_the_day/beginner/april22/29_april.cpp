/*
87th question from the following link 
https://www.w3resource.com/cpp-exercises/for-loop/index.php

Write a program in C++ to create and display unique three-digit 
number using 1, 2, 3, 4.
Also count how many three-digit numbers are there. Go to the editor
Sample Output:
The three-digit numbers are:
123 124 132 134 142 143 213 214 231 234 241 243 312 314 321 324 341 342 412 413 421 423 431 432
Total number of the three-digit-number is: 24    
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int count=0;
    for (int i=1;i<=4; i++){
        for (int j=1; j<=4; j++ ){
            for (int k=1; k<=4; k++){
                if (k!=j && k!=i && i!=j){
                    count+=1;
                    cout<<i<<j<<k<<" ";
                }
            }
        }
    }
    cout<<endl<<endl<<"The total numbers are: "<<count<<" in count.";
return 0;
}
