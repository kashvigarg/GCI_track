/*
Define a program to find out whether a given number is even or odd.

*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int property(int num1){
    if (num1%2==0) cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;
    return 0;
}

int main(){
    int a;
    cout<<"Enter number:"<<endl;
    cin>>a;
    
    property(a);

    return 0;

}