/*
55555
4444
333
22
1
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
    for (int i=n; i>=1; i--){
        for (int j=1 ;j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
return 0;
}