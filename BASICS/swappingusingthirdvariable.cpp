#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    //cin>>a>>b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"before swap a is :"<<a<<" " <<"before swap b is :"<<b<<endl;

    c=a;
    a=b;
    b=c;

    cout<<"After swap a is :"<<a<<" "<<"After swap b is :"<<b<<" "<<endl;
}