/*
Define a function to print the prime factors of a number.
*/


#include <iostream>
using namespace std;
#include <string>
#include <cmath>

void prime(int num1){
    int mark=0;
    for (int j=1; j<=num1; j++){
        if (j==1) continue;
        for (int i=j; i*i<num1; i++){
        if (num1%i==0) {
            mark+=1;
    }}
    }
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