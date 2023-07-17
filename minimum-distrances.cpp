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
    int d = 0;
    int min = 1000;
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (key == arr[j])
            {
                /* code */
                d = j - i;
                if (min > d)
                {
                    /* code */
                    min = d;
                }
            }
        }
    }
    cout << min;
}