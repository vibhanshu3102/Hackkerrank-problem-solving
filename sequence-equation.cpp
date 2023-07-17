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
    int check[100];
    for (int i = 0; i < 100; i++)
    {
        /* code */
        check[i] = check[i] + i;
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (check[i] == arr[j])
            {
                for (int i = 0; i < size; i++)
                {
                    if (j + 1 == arr[i])
                    {
                        cout << i + 1;
                    }
                }
            }
        }
    }
    return 0;
}