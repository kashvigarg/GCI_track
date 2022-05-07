/*
5
45
345
2345
12345
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
        for (int j=n-i;j<=n; j++){
            if (i==n) break;
            cout<<j;
            
        }
        cout<<endl;
    }
return 0;
}