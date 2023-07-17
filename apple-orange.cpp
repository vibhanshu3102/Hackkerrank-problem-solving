#include <iostream>
using namespace std;
int main()
{
    // s == distance from a  & t == distance from b
    int s, t;
    cin >> s >> t;

    // position of trees
    int a, b;
    cin >> a >> b;

    // fruits
    int m, n;
    cin >> m >> n;

    int apple[m];
    int orange[n];

    for (int i = 0; i < m; i++)
    {
        cin >> apple[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> orange[i];
    }
    int key;
    int countapple = 0;
    int countorange = 0;
    for (int i = 0; i < m; i++)
    {
        key = apple[i] + a;
        if (key >= s &&key <= t)
        {
            countapple++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        key = orange[i] + b;
        if (key >= s && key <= t)
        {
            countorange++;
        }
    }
    cout << countapple << endl;
    cout << countorange << endl;
}