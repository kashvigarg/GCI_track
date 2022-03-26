/*8.
A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/

#include <iostream>
using namespace std;
int main()
{
    float tot_classes, att_classes, att;
    cout << "Enter the number of total classes held" << endl;
    cin >> tot_classes;
    cout << "Enter the number of classes attended by the student" << endl;
    cin >> att_classes;
    att = ((att_classes / tot_classes) * 100);
    cout << "The attendence of the student is " << att << " %" << endl;
    if (att >= 75)
        {cout << "The student is eligible to sit in the exams" << endl;}
    else
        {cout << "The student is not eligible to sit in the exams" << endl;}

    return 0; 
}