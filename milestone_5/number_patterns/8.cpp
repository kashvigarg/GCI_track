/*
5
54
543
5432
54321
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
        for (int j=n;j>=n-i; j--){
            
            cout<<j;
            
        }
        cout<<endl;
    }
return 0;
}