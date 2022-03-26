// Write a C program to print all natural numbers from 1 to n. - using while loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value upto which natural numbers must be displayed:";
    cin>>n;
    for (int i=1;i<(n+1);i++){
        cout<<i<<endl;
        }

return 0;
}