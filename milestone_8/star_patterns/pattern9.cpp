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



*/
int main()
{
    int n;
    cout<<"Enter no of lines for pattern:"<<endl;
    cin>>n;
    int r =1;
    for (int i=1;i<=(n);i++){
        
        for (int j=1; j<=(2*n-1);j++){
            if ((j<=(n+1)-i)){
                cout<<j;

            }
            else if ((j>=(n-1)+i)){
                
                cout<<abs(j-2*r);
                r++;
            }
            else{
                cout<<" ";

            }
        }
        
        cout<<endl;
    }
return 0;
}