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

string repeat(string s1, int n){
    string s=s1;
    for (int i=0; i<n;i++){
        s+=s1;
        //s1+=s1;
    }

    return s;

}

int main()
{
    int n;
    cout<<"Enter the number of lines for the pattern:"<<endl;
    cin>>n;
    
    for (int i=0;i<n;i++){
        cout<<repeat(" ",(n-i)-1)<<repeat("*",i)<<endl;
    }
    

return 0;
}