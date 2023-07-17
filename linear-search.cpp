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
    int key;
    cin >> key;

  for (int i = 0; i < size; i++)
  {
    if(arr[]==arr[i]){
        cout<<"found at "<<i+1<<" position";
    }
  }
  return 0;
}