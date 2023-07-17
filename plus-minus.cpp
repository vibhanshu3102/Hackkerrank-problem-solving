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
    float pos = 0;
    float neg = 0;
    float zer = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            pos = pos + 1;
        }
        if (arr[i] < 0)
        {
            neg = neg + 1;
        }
        if (arr[i] == 0)
        {
            zer = zer + 1;
        }
    }

    float p;
    float n;
    float z;
    p = pos / size;
    n = neg / size;
    z = zer / size;

    cout << p << endl;
    cout << n << endl;
    cout << z << endl;

    return 0;
}