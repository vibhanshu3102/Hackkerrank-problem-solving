#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int s, e, k;
    cin >> s >> e >> k;
    int size;
    size = (e - s) + 1;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = s + i;
    }

    int remainder;
    int count = 0;
    int reverse_number = 0;
    int swap[size];
    for (int i = 0; i < size; i++)
    {
        int num = 0;
        num = arr[i];
        while (num != 0)
        {
            remainder = num % 10;
            reverse_number = reverse_number * 10 + remainder;
            num = num / 10;
        }
        swap[i] = reverse_number;
        reverse_number = 0;
    }
    for (int i = 0; i < size; i++)
    {

        if (abs(((arr[i] - swap[i]) % k) == 0))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}