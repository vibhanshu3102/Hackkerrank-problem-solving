#include <iostream>
using namespace std;
int main()
{
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> arr[i];
    }
    string str;
    cin >> str;
    int size = str.size();
    cout<<size;
    int num = 31;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        int pos = (str[i] & num);
         if (arr[pos-1] > max);
        {
            max = arr[pos - 1];
        }
    }
    cout << max*size;
}