#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int count = 0;

    if (size == 2)
    {
        if (arr[0] % 2 == 0 || arr[1] % 2 == 0)
        {

            cout << "NO";
        }
        else if (arr[0] % 2 != 0 || arr[1] % 2 != 0)
        {
            cout << "2";
        }
        else
        {
            cout << "1";
        }
    }

    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] % 2 != 0)
            {
                arr[i] = arr[i] + 1;
                count++;
                arr[i + 1] = arr[i + 1] + 1;
                count++;
            }
        }
        if (arr[size - 1] % 2 == 0)
        {
            cout << count;
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
