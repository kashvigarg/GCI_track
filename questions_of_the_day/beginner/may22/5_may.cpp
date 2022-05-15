/*
 https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/?page=1&category[]=Arrays&sortBy=submissions
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int k=1;
    

    int arr[7] = { 3, 4, 4, 2, 3, 5, 6};
    for (int i=0; i<7; i++){
        for (int j=0; j<7; j++){
            if (arr[i]==arr[i+k]){
                cout<<arr[i]<<" ";
                k++;
            }
            else continue;
        
    }}
return 0;
}