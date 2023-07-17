#include <iostream>
using namespace std;
int main()
{
    int s, d;
    cin >> s >> d;
    int arr[d - s];
    int count = 0;
    for (int i = s; i < d; i++)
    {
        arr[i] = i * i;
        if (arr[i] < 10)
        {
            for (int i = s; i < d; i++)
            {
                if ((arr[i] / 10) + (arr[i] % 10) == i)
                {
                    count++;
                }
            }
        }
        else if (arr[i] < 100 && arr[i] > 10)
        {
            for (int i = s; i < d; i++)
            {
                if ((arr[i] / 100) + (arr[i] % 100) == i)
                {
                    count++;
                }
            }
        }
        else if (arr[i] < 1000 && arr[i] > 100)
        {
            for (int i = s; i < d; i++)
            {
                if ((arr[i] / 100) + (arr[i] % 100) == i)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}
