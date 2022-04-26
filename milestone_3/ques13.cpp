// Write a C program to swap first and last digits of a number.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 1, n, num, num1, j = 0, first, last, new_num;
    cout << "Enter any number" << endl;
    cin >> num;
    num1 = num;
    
    while (1)
    {
        num = num / 10;
        j++;

        if (num == 0)
        {
            break;
        }
    }
    cout << num1 << " is a " << j << " digit number" << endl;

    first = (num1 / int(pow(10, (j - 1)))); 
    last = (num1 % 10);                    

    num1 = (num1 % int(pow(10, (j - 1)))); 
    num1 = (num1 / 10);                    

    num1 = (num1 * 10);

    last = (last * int(pow(10, (j - 1)))); 
    num1 = (num1 + last + first);
    cout << "The new number with swapped first and last digit is " << num1 << endl;
    return 0;
}



// ----------- to be worked on ------------
/*int main()
{
    int num, i, first_digit, last_digit,num1,cnt=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;

    last_digit=num%10;
    first_digit=num;
    while (first_digit>=10){
        first_digit=first_digit/10;
        cnt+=1;
    }

    cnt+=1;
    
    last_digit=i;
    last_digit=first_digit;
    first_digit=i;

    num1=first_digit*pow(10,cnt);
    num1+=num%int(pow(10,cnt));
    num1+=last_digit;
    
    cout<<"The given number was: "<<num<<endl;
    cout<<"The required new number is: "<<num1<<endl;
    
    return 0;
}*/

