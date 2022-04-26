/*
24th question from the following link 
https://www.w3resource.com/cpp-exercises/for-loop/index.php


Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]. Go to the editor
Sample Output:
Input the value of x: 3
Input number of terms: 5
The sum is : 16.375
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    float ans=1, fac=1, x;
    int n;
    cout<<"Enter the terms upto which you want the sum:"<<endl;
    cin>>n;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    for (int i=1; i<n; i++){
        fac*=i;
        ans+=((pow(x,i)/fac));
    
        
    }

    

    cout<<"The answer is: "<<(ans)<<endl;
return 0;
}