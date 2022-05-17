/*4.
Take 10 integer inputs from user and store them in an array. 
Now, copy all the elements in another array but in reverse order.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int *a;
    int *a2;
    int n;
    cout<<"Number of elements in array?"<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Enter element "<<i<<endl;
        cin>>a[i];
        a2[n-i]=a[i];
    }

    cout<<"Given array is:"<<endl;
    for (int j=0; j<n; j++){
        cout<<a[j]<<" ";
    }

    cout<<"Required array is:"<<endl;
    for (int j=0; j<n; j++){
        cout<<a2[j]<<" ";
    }
return 0;
}