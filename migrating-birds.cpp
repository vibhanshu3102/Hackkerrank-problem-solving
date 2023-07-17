#include <iostream>
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
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]==arr[i+1]){

         count++;  
        }
        if(arr[i]!=arr[i+1]){
            return count;
        }
    }
    cout<<count;
    return 0;
    
}