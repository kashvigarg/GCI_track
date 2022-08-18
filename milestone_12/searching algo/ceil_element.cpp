#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int findCeil(int arr[], int size, int n){
    int start = 0;
    int end = size- 1;
    int res = -1;
    while (start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==n) return abs(arr[mid]);
        else if(arr[mid]>n){
            res = mid;
            end = mid - 1;
        }
        else if (arr[mid]<n){
            start = mid+1;
        }  
    }
    return arr[res];
}
int main()
{
    int arr[]={1, 4, 5, 7 , 9 , 10};
    int n = 4;
    cout<<findCeil(arr, 6, n)<<endl;
return 0;
}