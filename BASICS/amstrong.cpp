#include<iostream>
using namespace std;
int main(){

    int n, digit=0, arm=0, t;
    cin>>n;
    t=n;
    while(n!=0){

        digit=n%10;
        arm=(arm + digit*digit*digit);
        n=n/10;
    }
    if(arm==t){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong number"<<endl;
    }
}