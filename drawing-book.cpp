#include <iostream>
using namespace std;
int main()
{
    int pages;
    int pagenumber;
    cin >> pages >> pagenumber;
    int value1, value2;
    value1 = pages - pagenumber;
    value2 = pagenumber - 1;
    if (value1 < value2 && value1 != 1)
    {
        cout << value1 / 2;
    }
    else if (value2 < value1 && value2 != 1)
    {
        cout << value2 / 2;
    }
    else if (value1 == 1 && pages % 2 == 0)
    {
        cout << "1";
    }
    else if (value2 == 1 && pages % 2 == 0)
    {
        cout << "1";
    }
    else if (value1 == 1 && (pages % 2 != 0))
    {
        cout << "0";
    }
    else if (value2 == 1 && (pages % 2 != 0))
    {
        cout << "0";
    }
    else if (value2 == 1 && value2 == 0)
    {
        cout << "0";
    }
    else if (value1 == value2)
    {
        cout << value1 / 2;
    }
    else
    {
        cout << "0";
    }
    return 0;
}