#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int second[m];
    int third[n];
    int arr[100];
    int max = 0;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> second[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> third[i];
    }
    for (int i = 0; i < m; i++)
    {

        if (second[i] > max)
        {
            max = second[i];
        }
    }

    for (int i = 0; i <= 100; i++)
    {
        int j;
        j = max * i;

        arr[i] = j;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            if (third[i] == arr[j])
            {
                /* code */
                count++;
                break;
            }
        }
    }
    cout << count;

    return 0;
}