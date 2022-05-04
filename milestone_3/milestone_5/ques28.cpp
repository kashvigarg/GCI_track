// Write a C program to find sum of all prime numbers between 1 to n.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n, sum=0;
    cout<<"Enter the value for n: "<<endl;
    cin>>n;
    for (int i=2; i<=n; i++){
        for (int j=2; j<=n/2; j++){
            if (i%j!=0){
                sum+=i;
            }
        }
    }
    cout<<"The sum of prime numbers between 1 and "<<n<<" is "<<sum;
return 0;
}

