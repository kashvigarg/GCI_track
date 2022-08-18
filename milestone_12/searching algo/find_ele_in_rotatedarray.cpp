#include <iostream>
using namespace std;
#include <string>
#include <cmath>

// no of times it has been rotated is the index of min element
int minIndex (int arr[], int size) {
    int start = 0; 
    int end = size-1;
    while (start <=end){
        int mid = start +(end- start)/2;
        int prev = (mid - 1 + size)%size;
        int next = (mid+1)%size;
        if ((arr[mid]<=arr[prev])&&(arr[mid]<=arr[next])){
            return mid;
        }
        else if (arr[mid]>arr[start]){
            start = mid +1;
        }
        else if (arr[mid]<arr[end]){
            end = mid - 1;
        }
    }
    return -1;
} 
int main()
{
    int arr[]={5, 7, 9, 1 , 2, 3};
    
return 0;
}