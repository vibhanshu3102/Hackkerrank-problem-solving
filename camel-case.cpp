#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0;
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        int m = str[i];
        if (m >= 'A' && m <= 'Z')
        {
            count++;
        }
    }

    cout << count + 1;
}