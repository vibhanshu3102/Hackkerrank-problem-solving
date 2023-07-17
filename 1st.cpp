#include <iostream>
using namespace std;
int main()
{
  int size;
  cin >> size;
  int rotation;
  cin >> rotation;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  
  while (rotation--)
  {
     int temp = arr[size - 1];
    for (int i = size - 2; i >= size; i--)
    {
     arr[i+1] = arr[i];
     arr[0] = temp;
    
    }
    
  }
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}