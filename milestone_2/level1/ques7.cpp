/*7.
Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The absolute of "<<num<<" is "<<abs(num)<<endl;
    
return 0;
}