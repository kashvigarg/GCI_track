/*
44th question from the following link 
https://www.w3resource.com/cpp-exercises/for-loop/index.php

Write a program in C++ to display the pattern like a diamond. 
Sample Output:
 Input number of rows (half of the diamond): 5                         
                                                                       
    *                                                                  
   ***                                                                 
  *****                                                                
 *******                                                               
*********                                                              
 *******                                                               
  *****                                                                
   ***                                                                 
    *   
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n;
    cout<<"Enter number of rows:"<<endl;
    cin>>n;
    for (int i=0; i<(2*n-1); i++){
        if (i<=n){
            for (int j=0; j<n-i; j++){
                cout<<" ";
            }
            for (int p=0; p<i; p++){
                cout<<"*";
            }
            cout<<endl;

        }
        else{
            for (int j=0; j<i-n; j++){
                cout<<" ";
            }
            for (int p=0; p<i; p++){
                cout<<"*";
            }
            cout<<endl;

        }

        
    }

return 0;
}