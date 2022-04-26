// Write a C program to print all Prime numbers between 1 to n.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"The prime numbers between 1 and "<< n<<" are: "<<endl<<endl;
    for (int j=1;j<=n;j++){
        for (int i=2;i<=(n/2);i++){
        if ((j%i)!=0){
            
            cout<<j<<endl;
            
        }
        else {
            
            continue;
        }
    }

    }
    

return 0;
}