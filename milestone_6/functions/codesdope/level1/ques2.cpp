/*Define a function that returns the product of two numbers entered by user.
*/
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int prodnum(int num1, int num2){
    
    return num1*num2;
}

int main(){
    int a,b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<< prodnum(a,b)<< endl;

    return 0;

}