#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
        int max = 0;
    for (int i = 0; i < n; i++)
    {
      if (max<arr[i])
      {
        max = arr[i];
      }
      
        
    }
    cout<<max;
    if (max>k)
    {
        cout<<max - k;
    }
    else{
        cout<<"0";
    }
    
    
}