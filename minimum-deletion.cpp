#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int count = 0;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        for (int j = i+1; j < size; j++)
        {
            /* code */
            if (key == arr[j])
            {
                count++;
            }
        }
        if(max<count){
            max = count;
            count = 0;
        }
        else{
            count = 0;
        }
        
    }
    cout << size - (max + 1);
}