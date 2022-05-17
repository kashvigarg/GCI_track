/*3.
Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int *a;
    int oddnum=0;
    int evenum=0;
    int positivenum=0;
    int negativenum=0;
    int zeronum = 0;
    int n;
    cout<<"Number of elements in array?"<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Enter element "<<i<<endl;
        cin>>a[i];
        for (int q=0; q<n;q++){
        if (a[i]==0){
            evenum++;
            zeronum++;
        }
        else if (a[i]>0 && a[i]%2==0){
            evenum++;
            positivenum++;
        }
        else if (a[i]>0 && a[i]%2!=0){
            positivenum++;
            oddnum++;
        }
        else if (a[i]<0 && a[i]%2==0){
            evenum++;
            negativenum++;
        }
        else if (a[i]<0 && a[i]%2!=0){
            positivenum++;
            oddnum++;
    }
}
    }

    cout<<"Final array is:"<<endl;
    for (int j=0; j<n; j++){
        cout<<a[j]<<" ";
    }

    
    
    cout<<endl<<endl<<"Number of zeroes:"<<zeronum<<endl;
    cout<<"Number of positive numbers:"<<positivenum<<endl;
    cout<<"Number of negative numbers:"<<negativenum<<endl;
    cout<<"Number of even numbers:"<<evenum<<endl;
    cout<<"Number of odd numbers:"<<oddnum<<endl;


return 0;
}