/*
1234567
12345
123
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
        for (int j=1 ;j<=2*i-1; j++){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}