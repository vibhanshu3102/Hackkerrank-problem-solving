#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int d1, m1, y1;
    cin >> d1 >> m1 >> y1;
    int d2, m2, y2;
    cin >> d2 >> m2 >> y2;
    int dt, mt, yt;
    dt = d2 - d1;
    mt = m2 - m1;
    yt = y2 - y1;
    int total = 0;
    if (yt == 0)
    {

        if (mt == 0)
        {
            if (d2 < d1)
            {
                total = (15 * dt);
            }
            else 
            {
                total = 0;
            }
        }
        else if(m1 > m2)
        {
            total = (500 * mt);
        }
    }
    else
    {
        total = 10000;
    }
    cout << abs(total);
}
