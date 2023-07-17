#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    // primary diagonal
    int psum = 0;
    for (int i = 0; i < size; i++)
    {
        psum = psum + arr[i][i];
    }
    // secondary diagonal
    int ssum = 0;
    for (int i = 0; i < size; i++)
    {
        ssum = ssum + arr[i][size - i - 1];
    }
    int value = 0;
    value = psum - ssum;
    if (value < 0)
    {
        value = -value;
    }

    cout << value;

    return 0;
}