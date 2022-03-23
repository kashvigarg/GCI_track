/*2.
Take two int values from user and print greatest among them.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<" is greater."<<endl;
    }
    else cout<<num2<<" is greater."<<endl;
    
return 0;
}