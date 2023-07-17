#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int val[4];
        val[0] = (n - 1) * a;
        val[1] = (n - 1) * b;
        val[2] = (a + b) + a;
        val[3] = (a + b) + b;
        sort(val, val + 4);
         for (int i = 0; i < 4; i++)
        {
            if (val[i] = val[i + 1])
            {
             val[2];
            }
        }
    }
}