/*
Define a function to find out if number is prime or not.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int voter(int num1){
    if (num1>=18) cout<<"You can vote."<<endl;
    else cout<<"You can vote after you're 18 years old."<<endl;
    return 0;
}

int main(){
    int a;
    cout<<"Enter age:"<<endl;
    cin>>a;
    
    voter(a);

    return 0;

}