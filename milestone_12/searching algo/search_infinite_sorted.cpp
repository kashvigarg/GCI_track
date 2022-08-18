#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int findIndex(int arr[], int n){
    int start = 0;
    int end = 1;
    while (start <= end){
        int mid = start + (end-start)/2;
        start = end;
        end*=2;
        if (arr[mid]==n) return mid;
        else if (arr[mid]>n){
            end = mid-1;
        }
        else if (arr[mid]<n){
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1, 3 , 4 , 5 , 6 , 7 , 8, 9, 10 , 11 , 12, 13 , 15 , 18};
    cout<<findIndex(arr, 5)<<endl;
return 0;
}