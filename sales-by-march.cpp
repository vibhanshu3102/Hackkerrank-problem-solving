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
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int count = 0;
    int check = 0;
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (arr[i] == arr[j])
        {
            count++;
            j++;
        }
        i = j - 1;
        check = check + (count / 2);
        count = 0;
    }
    cout << check;
    return 0;
}