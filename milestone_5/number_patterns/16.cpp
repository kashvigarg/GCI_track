/*
1
01
101
0101
*/

//could've did cout j%2

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
        for (int j=1 ;j<=i; j++){
            if (i%2==0){
                if (j%2==0){
                    cout<<1;
                }
                else cout<<0;
            }
            else{
                if (j%2==0){
                    cout<<0;
                }
                else cout<<1;

            }
        }
        cout<<endl;
    }
return 0;
}