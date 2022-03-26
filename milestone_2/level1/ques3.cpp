/*3.
A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int quantity,cost;
    cout<<"Enter quantity of purchased item:";
    cin>>quantity;
    
    if (quantity>1000){
        cost = (quantity * 100)-(quantity * 100 * 0.1);

    } else {
        cost = (quantity * 100);
    }
    cout<<"The total cost is: Rs."<<cost;
return 0;
}