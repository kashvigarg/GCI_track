#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n;
    cout<<"Enter number of lines for pattern:"<<endl;
    cin>>n;
    
    for (int i=0;i<(n);i++){
        for (int j=n;j>(i);j--){
            cout<<"*";
        }
        
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