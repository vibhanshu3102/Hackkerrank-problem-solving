#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int count = 1;
    int max = 0;
    int l = 0;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        int key = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            /* code */
            if (key == arr[j])
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
            count = 1;
            k = i;
        }
        else if (max == count)
        {
            l = i;
            count = 1;
        }
        else
        {
            count = 1;
        }
    }
    if (l < k)
    {
        cout << arr[l];
    }
    else
    {
        cout << arr[max];
    }

    return 0;
}
