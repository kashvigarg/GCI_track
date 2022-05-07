/*
11111
2222
333
44
5
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
    for (int i=1; i<=n; i++){
        for (int j=1 ;j<=n-i+1; j++){
            cout<<i;
        }
        cout<<endl;
    }
return 0;
}