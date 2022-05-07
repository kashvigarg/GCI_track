/*
54321
5432
543
54
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
        for (int j=n;j>=i; j--){
            
            cout<<j;
            
        }
        cout<<endl;
    }
return 0;
}