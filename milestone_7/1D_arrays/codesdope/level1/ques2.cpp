/*2.
Take 10 integer inputs from user and store them in an array. Again ask user to give a number. 
Now, tell user whether that number is present in array or not.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int binarySearch(int array[], int size, int search){
    int low =0, high=size-1;
    int mid = (low+high)/2;
    while (low<=high){
        if (search==array[mid]) return mid;
        else if (search>array[mid]) low=mid+1;
        else high = mid-1;
    }

    return -1;

}

int main()
{
    int *a;
    int n, searchVal;
    cout<<"Number of elements in array?"<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Enter element "<<i<<endl;
        cin>>a[i];
    }

    cout<<"Element to search for?"<<endl;
    cin>>searchVal;
    int result = binarySearch(a, n, searchVal);
    cout<<result<<endl;
    if (result>=0){
        cout <<searchVal<<" was found."<<endl;
    }
    else cout<<"The element wasn't found."<<endl;
    
return 0;
}