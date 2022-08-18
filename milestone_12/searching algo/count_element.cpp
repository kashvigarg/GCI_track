#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int findCount(int arr[], int n, int size){
    int start = 0;
    int end = size - 1;
    int count = 0;
    while (start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==n){
            // we have to make sure that its the first occurence
            end = mid - 1;
            
        }
        else if (arr[mid]>n){
            end = mid-1;
        }
        else if (arr[mid]<n){
            start = mid + 1;
        }
    }
    return count;
}

int main()
{
    int arr[]= {3, 6, 9 , 9 ,9 ,11};
    int n=9;
    cout<<findCount(arr, n, 6)<<endl;
return 0;
}