/*
55555
45555
34555
23455
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
    for (int i=n; i>=1; i--){
        int k=i;
        for (int j=1 ;j<=n; j++){
            if(k <= 5)
            {
                cout << k;
            }
            else
            {
               cout << "5";
            }
            k++;
        }
        cout<<endl;
    }
return 0;
}