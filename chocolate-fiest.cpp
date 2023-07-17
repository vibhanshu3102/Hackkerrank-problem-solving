#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, m;
        cin >> n >> c >> m;
        int first = 0;
        first = n / c;
        int count = 0;
        int total = 0;
        int newrap = 0;
        int rap;
        rap = n / c;
        int remain = 0;
        if (rap >= m)
        {
            newrap = rap / m;
            count = newrap;
            remain = first % m;
            if ((newrap + remain) / m == 1)
            {
                count++;
                // cout << count << " ";
            }
            else
            {
                rap = remain + newrap;
            }
            total = (n / c) + count;
        }
        else
        {
            total = first;
        }
        cout << total << endl;
    }
    return 0;
}