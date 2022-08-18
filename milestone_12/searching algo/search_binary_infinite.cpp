#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int findFirst (int arr[], int size){
    int start = 0;
    int end = 1;
    int res = -1;
    while(start<=end){
        start = end;
        end *=2;
        int mid = start + (end-start)/2;
        if (arr[mid]==1) {
            end = mid -1;
            res = mid;
        }
        else if (arr[mid]<1) {
            end = mid-1;
        } 
    }
    return res;
}
int main()
{
    int arr[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    cout<<findFirst(arr, 14)<<endl;
return 0;
}