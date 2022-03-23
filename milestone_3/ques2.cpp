// Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include <iostream>
using namespace std;

   
int main()
{
    int n;
    cout<<"Enter the value until which natural numbers must be displayed:";
    cin>>n;
    for (int i=n;i>0;i--){
        cout<<i<<endl;
        }

return 0;
}