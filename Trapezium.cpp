#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j, left, right, space;
    //starting value of first right angle triangle
    left = 1;
    //starting value of second right angle triangle
    right = n * n + 1;

    //iterating rows
    for (i = n; i > 0; i--)
    {
        // space should be given
        for (space = n; space > i; space--)
        {
            cout << "  ";
        }

        //first right angle triangle
        for (j = 1; j <= i; j++)
        {
            cout << left;
            cout << "*";
            left++;
        }
        for (j = 1; j <= i; j++)
        {
            cout << right;
            if (j < i)
            {
                cout << "*";
            }
            right++;
        }
        //to get the next row right angle triangle value
        right = right - (i * 2 - 1);
        cout << endl;
    }
    return 0;
}

