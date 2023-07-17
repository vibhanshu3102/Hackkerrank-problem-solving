#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int alice[a];
    int bob[a];
    for (int i = 0; i < a; i++)
    {
        cin >> alice[i];
    }
    for (int j = 0; j < a; j++)
    {
        cin >> bob[j];
    }
    int ali = 0;
    int bo = 0;
    for (int i = 0; i < a; i++)
    {

        if (alice[i] < bob[i])
        {

            ali++;
        }
        else if (alice[i] > bob[i])
        {

            bo++;
        }
    }
    cout << bo << " " << ali;

    return 0;
}