/*
Define a function to find out if number is prime or not.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

void prime(int num1){
    int mark=0;
    for (int i=2; i*i<num1; i++){
        if (num1%i==0) {
            mark+=1;
    }}
    if (mark==1) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
}

int main(){
    int a;
    cout<<"Enter number:"<<endl;
    cin>>a;
    
    prime(a);

    return 0;

}