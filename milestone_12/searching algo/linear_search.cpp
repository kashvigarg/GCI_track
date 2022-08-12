#include <iostream>
using namespace std;
#include <string>
#include <cmath>


int linearSearch(int arr[], int n){
    for(int i=0; i<10; i++){
        if (n==arr[i]) return i;
    }
    return -1;
}
int main()
{
    int arr[]={ 7, 8 , 5 , 4};
    int num;
    cin>>num;
    cout<<linearSearch(arr,num)<<endl;
return 0;
}