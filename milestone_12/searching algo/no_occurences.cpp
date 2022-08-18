#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int lastOccur(int arr[], int size, int n){
    int start = 0; 
    int end = size-1;
    int res = -1;
    while (start <=end){
        int mid = start +(end- start)/2;
        if (arr[mid]==n){
            res = mid;
            start = mid+1;
        }
        else if (arr[mid]>n){
            end = mid-1;
        }
        else if (arr[mid]<n){
            start = mid+1;
        }
    }
    return res;
}
int firstOccur(int arr[], int size, int n){
    int start = 0; 
    int end = size-1;
    int res = -1;
    while (start <=end){
        int mid = start +(end- start)/2;
        if (arr[mid]==n){
            res = mid;
            end = mid - 1;
        }
        else if (arr[mid]>n){
            end = mid-1;
        }
        else if (arr[mid]<n){
            start = mid+1;
        }
    }
    return res;
}
int main()
{
    int arr[]={ 1, 2 , 3 , 3 , 3 ,3, 5 , 7};
    int n = 3; 
    cout<<lastOccur(arr, 9, 3)-firstOccur(arr, 8, 3)+1<<endl;
return 0;
}