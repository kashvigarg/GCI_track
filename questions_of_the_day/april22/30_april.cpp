/*
69th problem from the link https://www.w3resource.com/cpp-exercises/for-loop/index.php

69. Write a program in C++ to produce a square matrix with 0's down the main diagonal,
1's in the entries just above and below the main diagonal, 
2's above and below that, etc.
0 1 2 3 4
1 0 1 2 3
2 1 0 1 2
3 2 1 0 1
4 3 2 1 0
Sample Output:
    
	  Input number or rows: 8                                                                                      
0  1  2  3  4  5  6  7                                                                                        
1  0  1  2  3  4  5  6                                                                                        
2  1  0  1  2  3  4  5                                                                                        
3  2  1  0  1  2  3  4                                                                                        
4  3  2  1  0  1  2  3                                                                                        
5  4  3  2  1  0  1  2                                                                                        
6  5  4  3  2  1  0  1                                                                                        
7  6  5  4  3  2  1  0
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n;
    cout<<"Enter number of rows for matrix:"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=0; j<n; j++){
            
            if (j==i-1){
                cout<<0<<" ";
                
            }
            else if (j<(i-1)){
                
                cout<<i-j-1<<" ";
            }

            else{
                cout<<j-i+1<<" ";
            }
            

        }
        
        cout<<endl;
    }
return 0;
}