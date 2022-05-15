/*
A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.
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