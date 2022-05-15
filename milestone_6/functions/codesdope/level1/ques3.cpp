/*
Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.

*/
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int circle(int r){
    cout<<"Circumference:"<<2*3.14*r<<endl;
    cout<<"Area:"<<3.14*r*r;

    return 0;
}

int main(){
    int radius;
    cout<<"Enter radius of circle:"<<endl;
    cin>>radius;
    circle(radius);

    return 0;

}