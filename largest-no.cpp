#include<iostream>
using namespace std;
int main(){
    int a , b , c,d,e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    if(a>b && a>c){
cout<<""<<a<<" is bigger";
    }
    else if(b>a && b>c){
cout<<""<<b<<" is bigger";
    }
      if(c>b && a>c){
cout<<""<<a<<" is bigger";
    }
      if(a>b && a>c){
cout<<""<<a<<" is bigger";
    }
    else{
        cout<<""<<c<<" is bigger";
    }
}