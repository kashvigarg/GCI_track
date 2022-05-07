/*
1
24
135
2468
13579
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n,k;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++){
        if (i%2==0) k=2;
        else k=1;
        
        for (int j=1 ;j<=i; j++){
            cout<<k;
            k=k+2;
        }
        cout<<endl;
    }
return 0;
}