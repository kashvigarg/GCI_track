/*4.
A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int salary,year,bonus;
    cout<<"Enter your salary:"<<endl;
    cin>>salary;
    cout<<"Enter the number of years of service:"<<endl;
    cin>>year;
    if (year>5){
        bonus = (salary*year) + ((salary*year)*(5/100));

    } else{
        bonus = (salary*year);

    }

    cout<<"The net bonus amount is: Rs."<<bonus<<endl;

return 0;
}