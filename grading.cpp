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
    int roundoff;
    int newgrade;
    for (int i = 0; i < size; i++)
    {
        roundoff = arr[i] % 10;
        if (arr[i] > 40)
        {
            if (roundoff == 3 || roundoff == 8)
            {
                newgrade = arr[i] + 2;
                cout << newgrade <<endl;
            }
            else if (roundoff == 1 || roundoff == 2 || roundoff == 5 || roundoff == 6 || roundoff == 7||roundoff==0)
            {
                cout << arr[i] <<endl;
            }
            else if (roundoff == 4 || roundoff == 9)
            {
                cout << arr[i] + 1 <<endl;
            }
        }
        else if (arr[i] + 1 == 40 || arr[i] + 2 == 40)
        {
            cout << "40"<<endl;
        }
        else
        {
            cout << arr[i] <<endl;
        }
    }

    return 0;
}