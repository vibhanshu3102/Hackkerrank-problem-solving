#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "enter the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter the key element: ";
    cin >> key;
    int start = 0;
    int end = size;
    int mid = (start + end) / 2;

        while (start <= end)
        {
            if (key == arr[mid])
            {
                cout << "element found at :" << mid;
            }
            else if (key < arr[mid])
            {
                end = mid - 1;
            }
            else if (key > arr[mid])
            {
                start = mid + 1;
            }
            else{
                cout<<"not found";
            }
        }

}