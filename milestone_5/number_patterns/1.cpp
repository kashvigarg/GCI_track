/*
1
12
123
1234
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
        for (int j=1;j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}