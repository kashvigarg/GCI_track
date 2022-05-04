#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
/*
pattern type NOT required
ABCDEFGHIJK
ABCDE GHIJK
ABCD   HIJK
ABC     IJK
AB       JK
A         K


to make:
ABCDCBA
ABC CBA
AB   BA
A     A

1234321
123 321
12   21
1     1

*/

int main()
{
    int n;
    cout<<"Enter no of lines for pattern:"<<endl;
    cin>>n;
    
    for (int i=1;i<=(n);i++){
        
        for (int j=1; j<=(2*n-1);j++){
            if ((j<(n+1)-i)){
                cout<<j;

            }
            else if ((j>=(n-1)+i)){
                
                cout<<j;
               
            }
            else{
                cout<<" ";

            }
        }
        
        cout<<endl;
    }
return 0;
}