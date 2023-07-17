// // right rotation //
// #include <iostream>
// using namespace std;
// int main()
// {
//     int size, rotation;
//     cin >> size >> rotation;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     while (rotation--)
//     {
//         int key = arr[size - 1];
//         int temp = 0;
//         for (int i = size - 1; i > 0; i--)
//         {
//             temp = arr[i];
//             arr[i] = arr[i - 1];
//             arr[i - 1] = temp;
//         }
//         arr[0] = key;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// // left rotation
#include <iostream>
using namespace std;
int main()
{
    int size, rotation;
    cin >> size >> rotation;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    while (rotation--)
    {
        int key = arr[0];
        for (int i = 0; i > size; i++)
        {
            cout<<"in";
            int temp = 0;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            cout<<arr[i];
        }

    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}