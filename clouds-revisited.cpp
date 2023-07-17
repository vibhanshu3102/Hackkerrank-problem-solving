#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int size, jump;
    cin >> size >> jump;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int start = 100;

    for (int i = 0; i < size; i++)
    {
        i = i + jump;

        if (i == 0)
        {
            if (arr[0] == 0)
            {
                start = start - 1;
                //  i = i + jump;
            }
            else if (arr[0] == 1)
            {
                start = start - 3;
                //  i = i + jump;
            }
        }
        else
        {
            if (arr[i] == 0)
            {
                start = start - 1;
                //  i = i + jump;
            }
            else
            {
                start = start - 3;
                // i = i + jump;
            }
        }
        if (i <= size - jump)
        {
            i = i + jump;
        }
        else
        {
            i = abs((size - i) + jump);
        }

        if (i == 0)
        {
            if (arr[0] == 0)
            {
                start = start - 1;
                //  i = i + jump;
            }
            else if (arr[0] == 1)
            {
                start = start - 3;
                //  i = i + jump;
            }
        }
    }
    if (arr[0] == 0)
    {

        cout << start - 1;
    }
    else
    {
        cout << start - 3;
    }
}