//Write a program in C to print first 50 natural numbers using recursion.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

void printFunc(int n){ 
    if (n==0) return;
    int temp = 1;
    
    cout<<n<<' ';
    printFunc(n-1);
}  
int main()
{
    int n;
    cin>>n; 
    printFunc(n);
    
return 0;
}