#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    long long sum;
    for(int i=0; i<size ; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
    return 0;
}