/*6.
Take input of age of 3 people by user and determine oldest and youngest among them.*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int age1,age2,age3,oldest,youngest;
    if (age1>age2){
        if (age1>age3){
            oldest=age1;
            if (age2>age3){
                youngest=age3;
            }
            else {
                
            }
        }
        else {
            oldest = age3;
            if (age2>age1){
                youngest=age1;
            }
            else{

            }
        }
    }
    else {
        if (age2>age3){
            oldest=age2;
            if(age1>age3){

            }
            else{

            }
        }
        else {
            oldest = age3;
            if (age2>age1){

            }
            else{
                
            }

        }
    }

    cout<<"The person having age"<<oldest<<"is the oldest while the person with age"<<youngest<<"is the youngest.";
    
    return 0;
}