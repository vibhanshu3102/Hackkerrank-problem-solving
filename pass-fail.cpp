#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int gender;
    int total, percentage;
    cin >> a >> b >> c;
    total = a + b + c;
    cout << "Total : " << total;
    percentage = total / 3;
    cout << "enter the gender: ";
    cin>>gender;
   
    cout << "percentage: " << percentage;
    if (percentage >= 62 && gender==0)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
    return 0;
}