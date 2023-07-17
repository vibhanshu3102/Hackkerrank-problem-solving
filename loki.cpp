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
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int count = 1;
    sort(arr, arr + size);
    int newsum = 0;
    for (int i = size - 1; i > 0; i--)
    {
        newsum = newsum + arr[i];
        sum = sum - arr[i];

        if (newsum < sum)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}