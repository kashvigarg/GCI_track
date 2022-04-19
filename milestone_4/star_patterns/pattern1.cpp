#include <iostream>
using namespace std;
#include <string>
#include <cmath>

// 1. outer loop
// 2. inner loop
// 3. print


/* pattern type -
|\
| \
|  \
*/
   
int main()
{
    int n;
    cout<<"Enter the number of lines for the pattern:"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}