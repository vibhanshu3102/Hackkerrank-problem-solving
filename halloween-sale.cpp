#include <iostream>
using namespace std;
int main()
{
    int s, d, m, b;
    cin >> s >> d >> m >> b;
    int sum = 0;
    int val = 0;
    int count = 0;
    if (s >= b)
    {
        cout << "0";
    }
    else if (s == 1)
    {
        cout << b;
    }
    else
    {
        for (int i = 0; i < 10000; i++)
        {
            val = s - d * i;
            if (val >= m)
            {
                if (sum <= b)
                {
                    sum = sum + val;
                    val = 0;
                    count++;
                }
            }
            else
            {
                if (sum <= b)
                {
                    sum = sum + m;
                    count++;
                }
            }
        }
        cout << count - 1;
    }
}