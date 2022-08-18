#include <iostream>
using namespace std;
#include <string>
#include <cmath>


int findFloor(int arr[], int size, int n){
    int start = 0;
    int end = size-1;
    int res = -1;
    while (start<=end){
        int mid = start + (end - start)/2;
        if (arr[mid]==n) return abs(arr[mid]);
        else if(arr[mid]>n){
            end = mid - 1;
        }
        else if (arr[mid]<n){
            res = mid;
            start = mid+1;
        }
    }
    return arr[res];
}
int main()
{
    int arr[]={1, 3, 5 , 7 , 9 , 10};
    int n=9;
    cout<<findFloor(arr, 6, n)<<endl;
return 0;
}