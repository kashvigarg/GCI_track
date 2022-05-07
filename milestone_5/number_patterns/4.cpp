/*
12345
2345
345
45
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
    for (int i=0; i<n; i++){
        for (int j=i+1;j<=n; j++){
            
            cout<<j;
            
        }
        cout<<endl;
    }
return 0;
}