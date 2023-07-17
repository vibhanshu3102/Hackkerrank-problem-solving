#include <iostream>
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
    int key = 0;
    int max = arr[0];
    int count = 0;
    int min = arr[0];
    int mincount = 0;
    for (int i = 0; i < size; i++)
    {
        key = arr[i];

        if (max < key)
        {
            max = key;
            count++;
        }
        else if (min > key)
        {
            min = key;
            mincount++;
        }
    }
    cout << count << " " << mincount;

    return 0;
}
