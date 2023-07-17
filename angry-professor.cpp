#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= 0)
            {
                count++;
            }
            cout << count;
        }
        if (count < k)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}