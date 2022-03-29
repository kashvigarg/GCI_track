#include <iostream>
using namespace std;
#include <string>
#include <cmath>

/* pattern type -
    /|
   / |
  /  |
 /   |   
*/


int main()
{
    int n;
    string s=" ";
    string s2="*";
    cout<<"Enter the number of lines for the pattern:"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1; j<=i;j++){
            for (int k=1; k<=(n-j);k++){
                cout<<" ";
            }
            for (int p=1; p<=j;p++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

return 0;
}