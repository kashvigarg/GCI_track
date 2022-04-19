#include <iostream>
using namespace std;
#include <string>
#include <cmath>

// somewhat tough

/*
pattern type
*********
**** ****
***   ***
**     **
*       *


123454321
1234 4321
123   321
12     21
1       1

*/
int main()
{
    int n;
    cout<<"Enter number of lines for pattern:"<<endl;
    cin>>n;
    
    for (int i=1;i<=(n);i++){
        for (int j=1; j<=(2*n-1);j++){
            if ((j<=(n+1)-i)||(j>=(n-1)+i)){
                cout<<"*";

            }
            else{
                cout<<" ";

            }
        }
        cout<<endl;
        
    }


return 0;

}

/*
is there any way to do using:
for (int i=0;i<(n);i++){
        for (int j=n;j>(i);j--){
            cout<<"*";
        }
        for (int p=0;p<(2*i-1);p++){
            cout<<" ";

        }
        
        for (int q=n ;q>i; q--){
            cout<<"*";

        }
        cout<<endl;
    }
*/