#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int findFirst (int arr[], int size){
    int start = 0;
    int end = 1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        
        if (arr[mid]==1) {
            res = mid;
            end = mid -1;
            
        }
        else if (arr[mid]<1) {
            start = end;
            end*=2;
        } 
    }
    return res;
}
int main()
{
    int arr[]={ 0, 0, 1, 1, 1, 1};
    cout<<findFirst(arr, 14)<<endl;
return 0;
}