#include<iostream>
using namespace std;

int main(){

    int n, digit=0,ans=0,t;
    cin>>n;
    t=n;

    while(n!=0){

        digit = n%10;
        ans = (ans*10)+digit;
        n = n/10;
    }
    if(ans==t){
        cout<<"pallindrom";
    }
    else{
        cout<<"not pallindrom";
    }
}