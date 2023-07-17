#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c < b && c > a)
        {
            cout << "Mouse C"<<endl;
        }
        else if (c > b && c > a && b > a)
        {
            cout << "Cat B"<<endl;
        }
        else if (c > b && c > a && a > b)
        {
            cout << "Cat A"<<endl;
        }
        else if (c < b && c < a && b > a)
        {
            cout << "Cat B"<<endl;
        }
        else if (c < b && c < a && a > b)
        {
            cout << "Cat A"<<endl;
        }
        else
        {
            cout << "Mouse C"<<endl;
        }
    }
}