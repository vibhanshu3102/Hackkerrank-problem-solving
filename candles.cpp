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
    int count = 0;
    int ocount = 0;
    int tcount = 0;
    int rcount = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[0] == arr[i])
        {
            count++;
        }

        else if (arr[1] == arr[i])
        {
            ocount++;
        }
        else if (arr[2] == arr[i])
        {
            tcount++;
        }
        else if (arr[3] == arr[i])
        {
            rcount++;
        }
    }
    if (count >= ocount && count >= rcount && count >= tcount)
    {
        cout << count;
    }
    else if (rcount >= count && rcount >= ocount && rcount >= tcount)
    {
        cout << rcount;
    }
    else if (ocount >= rcount && ocount >= tcount && ocount >= count)
    {
        cout << ocount;
    }
    else if (tcount >= rcount && tcount >= ocount && tcount >= count)
    {
        cout << tcount;
    }
    return 0;
}
