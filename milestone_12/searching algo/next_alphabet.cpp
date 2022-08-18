#include <iostream>
using namespace std;
#include <string>
#include <cmath>

char nextAlpha (char arr[], int size , char alpha){
    int start = 0; 
    int end = size-1;
    char res = '*';
    while (start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==alpha){
            start = mid+1;
        }
        else if (arr[mid]>alpha){
            end = mid-1;
            res = mid;
        }
        else if (arr[mid]<alpha){
            start = mid +1;
        }
    }
    return arr[res];
}
int main()
{
    char arr[]={'a', 'c', 'e', 'f', 'g', 'j'};
    char alpha = 'b';
    cout<<nextAlpha(arr, 6 , alpha)<<endl;
return 0;
}