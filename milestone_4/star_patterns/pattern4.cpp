#include <iostream>
using namespace std;
#include <string>
#include <cmath>

/* pattern type -
|  /
| /  
|/   
*/


int main()
{
    int n;
    cout<<"Enter the number of lines for the pattern:"<<endl;
    cin>>n;
    
    for (int i=n;i>0;i--){
        for (int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

return 0;
}