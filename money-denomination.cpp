#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int choice
    switch(choice)
    int fcount = 0;
    case 1: (amount % 500 == 0)
    {
        fcount++;
    }
    int tcount = 0;
    case 2: (amount % 200 == 0)
    {
        tcount++;
    }
    int ocount = 0;
    case 3: (amount % 100 == 0)
    {
        ocount++;
    }
    int hcount = 0;
    case 4: (amount / 50 == 0)
    {
        hcount++;
    }
    cout << "500: " << fcount;
    cout << endl;
    cout << "200: " << tcount;
    cout << endl;
    cout << "100: " << ocount;
    cout << endl;
    cout << "50: " << hcount;
    cout << endl;
}