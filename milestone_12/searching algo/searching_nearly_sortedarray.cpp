#include <iostream>
using namespace std;
#include <string>
#include <cmath>

// take care of bounds of array 

int findIndex(int arr[], int size, int n){
    int start = 0;
    int end = size-1;
    while (start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==n) return mid;
        if (mid<=end && arr[mid+1]==n) return mid+1;
        if (mid>=start && arr[mid-1]==n) return mid-1;
        else if (arr[mid]>n){
            end = mid-2;
        }
        else if (arr[mid]<n){
            start = mid +2;
        }
    }
    return -1;
}
int main()
{
    int arr[]={ 1, 2 , 5 , 3 , 4, 10};
    int n = 5;
    cout<<findIndex(arr, 6, n)<<endl;
return 0;
}