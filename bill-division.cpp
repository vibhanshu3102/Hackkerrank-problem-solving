#include<iostream>
using namespace std;
int main(){
        int n , k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int last;
    cin>>last;
    int sum = 0;
    int newsum = 0;
    int bill = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    newsum = sum - arr[k];
    if (newsum/2==last)
    {
        cout<<"Bon Appetit";
    }
    else{
        bill = last - (newsum/2);
        cout<<bill;
    }
    
return 0;
    
}