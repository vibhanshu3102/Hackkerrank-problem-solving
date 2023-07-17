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
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if ((arr[j] - key) <= 1)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        if (max < count)
        {
            max = count;
            count = 1;
        }
        else{
            count = 1;
        }
    }
    cout<<max;
}