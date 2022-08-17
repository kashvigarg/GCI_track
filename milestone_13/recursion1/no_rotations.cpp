#include <iostream>
using namespace std;
#include <string>
#include <cmath>

// no of times it has been rotated is the index of min element
int rotations (int arr[], int size) {
    int start = 0; 
    int end = size-1;
    int res = -1;
    while (start <=end){
        int mid = start +(end- start)/2;
        if ((arr[mid]<arr[mid+1])&&(arr[mid]<arr[mid-1])){
            res = mid;
        }
        else if (arr[mid]>arr[mid-1]){
            start = mid +1;
        }
        else if (arr[mid]<arr[mid-1]){
            end = mid - 1;
        }
    }
    return res;
} 
int main()
{
    int arr[]={5, 7, 9, 1 , 2, 3};
    cout<<rotations(arr, 6)<<endl;
return 0;
}