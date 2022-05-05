/*
https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int temp[5] = {3, 5, 6, 1, 4};
    int d, final[5];
    cout<<"Enter number of steps to shift the array:"<<endl;
    cin>>d;
    cout<<"Array before: "<<endl<<"3 5 6 1 4"<<endl;
    cout<<"Array after:"<<endl;
    for (int i=0; i<(5-d); i++){
        final[i]=temp[d+i];
        cout<<final[i]<<" ";
    }
    for (int j=0; j<d; j++){
        final[5-d+j]=temp[j];
        cout<<final[5-d+j]<<" ";
    }

    



return 0;
}