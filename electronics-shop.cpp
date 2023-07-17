#include <iostream>
using namespace std;
int main()
{
    int budget, keyboard, usb;
    cin >> budget >> keyboard >> usb;
    int key[keyboard];
    for (int i = 0; i < keyboard; i++)
    {
        cin >> key[i];
    }
    int us[usb];
    for (int i = 0; i < usb; i++)
    {
        cin >> us[i];
    }
    int sum;
     int max = 0;
    int total[keyboard * usb];
    for (int i = 0; i < keyboard; i++)
    {
        sum = 0;
        for (int j = 0; j < usb; j++)
        {
            sum = key[i] + us[j];
            total[j] = sum;
            if (sum < budget)
            {
               

                if (max < total[j])
                {
                    max = total[j];
                }
            }
        }
    }

cout << max;
return 0;
}