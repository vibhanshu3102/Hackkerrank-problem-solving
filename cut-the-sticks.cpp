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
    cout << size << endl;
    int count = 1;
    int key = 0;
    int value = size;
    for (int i = 0; i < size; i++)
    {
        key = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            /* code */
            if (key == arr[j])
            {
                count++;
            }
            else
            {
                value = value - count;

                cout << value << endl;
                count = 1;
                i = j - 1;
                break;
            }
        }
    }
}