/*
https://practice.geeksforgeeks.org/problems/peak-element/1

An element is called a peak element if its value is not smaller than the value of its 
adjacent elements(if they exists).
Given an array arr[] of size N, find the index of any one of its peak elements.
Note: The generated output will always be 1 if the index that you return is correct. 
Otherwise output will be 0. 
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

void peakElement(int arr[]){
    int peakNum=arr[0];
    int i;
    int len = sizeof(arr)/sizeof(arr[0]);
    for ( i=0; i<=len; i++ ){
        if (arr[i]<arr[i+1]){
            peakNum=arr[i+1];
            
        }
        else{
            peakNum=arr[i];
        }
        
    }

    cout<<peakNum;

}

int main()
{
    int peak,n;
    cout<<"Enter number of terms of array:"<<endl;
    cin>>n;
    int arr[5];
    cout<<"Enter terms of array:"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    peakElement(arr);
    


return 0;
}