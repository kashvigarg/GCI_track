// Write a program in C++ to find the last prime number occur before the entered number. Go to the editor
// Sample Output:
// Input a number to find the last prime number occurs before the number: 50
// 47 is the last prime number before 50

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num, prime, rem;
    int i=1;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    for (i; i<=num; i++){
        rem=0;
        if (num%i==0){
            rem=1;
            break;
            
        }}
        if (rem==0){
            prime=i;
        }

        


    

    cout<<prime;
return 0;
}