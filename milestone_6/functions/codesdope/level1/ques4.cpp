/*
Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
*/
#include <iostream>
using namespace std;


void maximum(int num1, int num2, int num3){
    int max;
    if (num1>num2){
        if (num3>num1) max=num3;
        else max=num1;

    }
    else{
        if (num3>num2) max=num3;
        else max=num2;

    }
    cout<<"Maximum number is: "<<max<<endl;

}

void minimum(int num1, int num2, int num3){
    int min;
    if (num1>num2){
        if (num2>num3) min=num3;
        else min=num2;

    }
    else{
        if (num1>num3) min=num3;
        else min=num1;

    }
    cout<<"Minimum number is: "<<min<<endl;

}

int main(){
    int a,b,c;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"Enter third number:"<<endl;
    cin>>c;
    minimum(a,b,c);
    maximum(a,b,c);

    return 0;
}