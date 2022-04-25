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
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    for (int i =1; i<=num; i++){
        if (i%num ==0){
            for (int j=0; j<i; j++){
                if (j%i==0) continue;
                else cout<<j<<endl;

            }
        }
    }
return 0;
}