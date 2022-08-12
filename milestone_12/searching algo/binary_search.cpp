#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int binarySearch(int arr[], int n, int size){
    int start=0;
    int end = size-1;
    while (start<=end){
        int mid = (start+end)/2;
        if (arr[mid] == n) return mid; 
        else if (arr[mid]>n){
            end = mid - 1;
        }   
        else if (arr[mid]<n){
            start = mid+1;
        }
            }

            return -1;

}
int main()
{
    int arr[] = {1, 2 , 3, 4, 5, 6};
    int num;
    cin>>num;
    cout<<binarySearch(arr, num, 6)<<endl;
return 0;
}