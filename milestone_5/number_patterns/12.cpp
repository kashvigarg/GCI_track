/*
12345
4321
123
21
1
*/
//tough 

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n,a;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for (int i=n; i>=1; i--){
        if (i%2==1) a=1;
        else a=i;
        for (int j=1; j<=i; j++){
            cout<<a;
            if (i%2==1) a++;
            else a--;
        }
        cout<<endl;
    }
return 0;
}