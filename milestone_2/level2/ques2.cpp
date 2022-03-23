/*2.Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.

if employee is a male and age is in between 20 to 40 then he may work in anywhere

if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

And any other input of age should print "ERROR".*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    char gender, marriage;
    cout << "Enter the age of the employee:" << endl;
    cin >> age;
    cout << "Enter the gender of the employee (M/F):" << endl;
    cin >> gender;
    cout << "Is the employee married? (Y/N)" << endl;
    cin >> marriage;

    if ((gender == 'F') || (gender == 'f')) {
        cout << "She will work only in urban areas." << endl;
        }
    else if (((gender == 'M')||(gender=='m')) && (age >= 20 || age < 40))
        cout << "He may work anywhere." << endl;

    else if (((gender == 'M')||(gender=='m')) && (age >= 40 || age <= 60))
        cout << "He may work in urban areas only." << endl;

    else
        cout << "ERROR" << endl;
}