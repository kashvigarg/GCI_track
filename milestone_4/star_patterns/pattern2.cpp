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

// initially i created a method to repeat the string the req no of times
// but the loop method is simpler


int main()
{
    int n;
    cout<<"Enter the number of lines for the pattern:"<<endl;
    cin>>n;
    
    for (int i=1;i<=n;i++){
        for (int j =0; j<(n-i);j++){
            cout<<" ";
        }
        for (int p=0; p<i; p++){
            cout <<"*";
        }
        cout<<endl;
    }
    

return 0;
}