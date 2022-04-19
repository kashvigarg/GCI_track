#include <iostream>
using namespace std;
#include <string>
#include <cmath>

/*
pattern type
    1
   121
  12321
 1234321
123454321
*/
   
int main()
{
    int n;
    cout<<"Enter no of lines for pattern:"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int q=1; q<=(n-i);q++){
            cout<<" ";
        }
        for (int j=1; j<=i;j++ ){
            cout<<j;
        }
        
        for (int p=(i-1); p>=1;p--){
            cout<<p;
        }
        cout<<endl;
    }
return 0;
}