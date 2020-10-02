#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a[20][20];
    int n, i, j, count = 1;
    cin >> n;
    // to find the number of round in the pattern
    int r = ceil((double)n / 2);

    //iterating i for the rounds
    for (i = 0; i < r; i++)
    {
        // rightward row value is same , column value differs
        for (j = i; j <= n - i - 1; j++)
        {
            a[i][j] = count++;
        }
        // downwards row will change column is same
        for (j = i + 1; j <= n - i - 1; j++)
        {
            a[j][n - i - 1] = count++;
        }
        // leftwards row remains be same and column will differs
        for (j = n - i - 2; j >= i; j--)
        {
            a[n - i - 1][j] = count++;
        }
        //upwards row value changes column will be same
        for (n - i - 2; j >= i; j--)
        {
            a[j][i] = count++;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}