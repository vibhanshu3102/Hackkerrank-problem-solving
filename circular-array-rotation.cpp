#include <iostream>
using namespace std;
int main()
{
    int size, rotation, que;
    cin >> size >> rotation >> que;
    int arr[size];
    int queries[que];
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }
    for (int i = 0; i < que; i++)
    {
        cin >> queries[i];
    }
    //    for rotation     //
    int check[size];
    while (rotation != 0)
    {
        for (int i = 0; i < size; i++)
        {

            if (i != size - 1)
            {
                check[i + 1] = arr[i];
            }
            else if (i == size - 1)
            {
                check[0] = arr[size - 1];
            }
            cout << check[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << check[i];
    }

    return 0;
}