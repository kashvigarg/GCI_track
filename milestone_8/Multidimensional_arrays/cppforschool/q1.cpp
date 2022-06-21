/*
1. Write a menu driven C++ program to do following operation on two dimensional array A of size m x n.
You should use user-defined functions which accept 2-D array A, and its size m and n as arguments.
The options are:

To input elements into matrix of size m x n
To display elements of matrix of size m x n
Sum of all elements of matrix of size m x n
To display row-wise sum of matrix of size m x n
To display column-wise sum of matrix of size m x n
To create transpose of matrix B of size n x m

*/

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int m, n;
int *arr;

void Input(int *arr, int m, int n);
void Display(int *arr, int m, int n);
void Sumcal(int *arr);
void RowSum(int *arr);
void ColSum(int *arr);
void Transpose(int *arr);

int main()
{
    int x, chart;

switchcases:

    cout << "1. To input elements into matrix of size m x n\n"
         << "2. To display elements of matrix of size m x n\n"
         << "3. Sum of all elements of matrix of size m x n\n"
         << "4. To display row-wise sum of matrix of size m x n\n"
         << "5. To display column-wise sum of matrix of size m x n\n"
         << "6. To create transpose of matrix B of size n x m\n";

    cin >> x;

    switch (x)
    {
    case (1):
    {
        cout << "How many rows?";
        cin >> m;
        cout << "How many columns?";
        cin >> n;
        int *arr = new int[m * n];
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i * j];
            }
        }
        break;
    }

    case (2):
    {
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << " " << arr[i * j];
            }
            cout << "\n";
        }
        break;
    }

        /*case (3):
            Sumcal(arr);
            break;

        case (4):
            RowSum(arr);
            break;

        case (5):
            ColSum(arr);
            break;

        case (6):
            Transpose(arr);
            break;

        default:
            cout << "please enter a valid choice.";
            break;*/
    }

    cout << "Do you want to continue[1/2]";
    cin >> chart;
    if (chart == 1)
        return 0;
    else
        goto switchcases;
}

void Input(int *arr, int m, int n)
{
}

void Display(int *arr, int m, int n)
{
}