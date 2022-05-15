/*
Given an array of size N containing only 0s, 1s, and 2s; 
sort the array in ascending order.
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

void sortarr(int arr[], int n){
    int p=0, q=0, r=0;
    int arr0[10];
    int arr1[10];
    int arr2[10];
    for (int i=0; i<n; i++){
        if (arr[i]==0){
            arr0[p]=arr[i];
            p++;
        }
        else if (arr[i]==1){
            arr1[q]=arr[i];
            q++;
        }
        else{
            arr2[r]=arr[i];
            r++;
        }

        int ans[10]={*arr0, *arr1, *arr2};
        cout<<*ans;
    }


}
int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[10];
    cout<<"Enter elememts of array: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    sortarr(arr, n);
return 0;
}