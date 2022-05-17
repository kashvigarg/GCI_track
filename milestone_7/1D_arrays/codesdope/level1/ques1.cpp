/*1.
Take 10 integer inputs from user and store them in an array and print them on screen.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int *a;
    int n;
    cout<<"Number of elements in array?"<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Enter element "<<i<<endl;
        cin>>a[i];
    }

    cout<<"Final array is:"<<endl;
    for (int j=0; j<n; j++){
        cout<<a[j]<<" ";
    }
return 0;
}