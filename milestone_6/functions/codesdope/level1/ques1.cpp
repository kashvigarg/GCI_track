/*
Write a program to print the sum of two numbers entered by user by defining your own function.
*/
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int sumnum(int num1, int num2){
    
    return num1+num2;
}

int main(){
    int a,b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<< sumnum(a,b)<< endl;

    return 0;

}