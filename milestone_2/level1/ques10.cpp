/*
10.
If
x = 2
y = 5
z = 0
then find values of the following expressions:
a. x == 2
b. x != 5
c. x != 5 && y >= 5
d. z != 0 || x == 2
e. !(y < 10)
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int x=2,y=5,z=0;
    cout<<"1. x == 2 is "<<(x == 2)<<endl;
    cout<<"2. x != 5 is "<<(x != 5)<<endl;
    cout<<"3. x != 5 && y >= 5 is "<<(x != 5 && y >= 5)<<endl;
    cout<<"4. z != 0 || x == 2 is "<<(z != 0 || x == 2)<<endl;
    cout<<"5. !(y < 10) is "<<(!(y < 10))<<endl;

return 0;
}