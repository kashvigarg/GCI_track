/*1.
Take values of length and breadth of a rectangle from user and check if it is square or not.
*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
   
int main()
{
    int length,breadth;
    cout<<"Enter length:"<<endl;
    cin>>length;
    cout<<"Enter breadth:"<<endl;
    cin>>breadth;
    if(length==breadth){
        cout<<"It is a square."<<endl;
    }
    else if (length==0 || breadth==0 || length!=breadth){
        cout<<"It is not a sqaure."<<endl;
    }


return 0;
}





