#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int lastOccur(int arr[], int n, int size){
    int start = 0;
    int end = size-1;
    int res = -1; // -1 as element might not be in array
    while (start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==n){
            // we have to make sure that its the last occurence
            start = mid + 1;
            res = mid;
        }
        else if (arr[mid]>n){
            end = mid-1;
        }
        else if (arr[mid]<n){
            start = mid + 1;
        }
    }
    return res;
}   
int main()
{
    int arr[]={2, 9, 9, 9, 9 , 10};
    int n = 9;

    cout<<lastOccur(arr,n, 6)<<endl;
return 0;
}