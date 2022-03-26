/*Write a C program to print all odd number between 1 to 100.*/

#include <iostream>
using namespace std;

   
int main()
{
    for (int i=1;i<100;i++){
        if (i%2!=0){
            cout<<i<<endl;
        }

    }
return 0;
}