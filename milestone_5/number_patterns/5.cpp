/*
54321
4321
321
21
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
    for (int i=0; i<n; i++){
        for (int j=n-i;j>=1; j--){
            
            cout<<j;
            
        }
        cout<<endl;
    }
return 0;
}