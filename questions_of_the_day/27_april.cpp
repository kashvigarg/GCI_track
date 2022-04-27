/*
55th question from the following link 
https://www.w3resource.com/cpp-exercises/for-loop/index.php

Write a program in C++ to display such a pattern for n number of rows using number. 
Each row will contain odd numbers of number. 
The first and last number of each row will be 1 and middle column will be the row number. 
n numbers of columns will appear in 1st row. 
Sample Output:
 Input number of rows: 7                                                                                      
     1234567654321                                                                                            
      12345654321                                                                                             
       123454321                                                                                              
        1234321                                                                                               
         12321                                                                                                
          121                                                                                                 
           1 

*/


#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int rows;
    cout<<"Enter number of rows:"<<endl;
    cin>>rows;
    for (int i=0; i<rows; i++){
        for (int j=rows; j>rows-i; j--){
            cout<<" ";
            
        }    
        for (int p=1; p<=(rows-i); p++){
            cout<<p;
            
        }
        for (int q=rows-i-1; q>0; q--){
            cout<<q;
        }
        cout<<endl;
        
    }



return 0;
}