/*
13579
3579
579
79
9
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for (int i=1; i<=2*n-1; i=i+2){
        for (int j=i ;j<=2*n-1; j=j+2){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}