/*5.
Write a program to find the sum and product of all elements of an array.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int *a;
    int n,sum=0, prod=1;
    cout<<"Number of elements in array?"<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Enter element "<<i<<endl;
        cin>>a[i];
        sum+=a[i];
        prod*=a[i];
    }

    cout<<"Final array is:"<<endl;
    for (int j=0; j<n; j++){
        cout<<a[j]<<" ";
    }

    cout<<"Sum :"<<sum<<"  Product: "<<prod<<endl;
return 0;
}