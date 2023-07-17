#include <iostream>
using namespace std;
int main()
{
    int c;
    float F;
    cout << "enter the celcius: ";
    cin >> c;
    F = 1.8 * c + 240; 
    cout << "the farenheight is: " <<F;
    return 0;
}