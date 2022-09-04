#include<iostream>
using namespace std;
int main(){

    int n,a=0,b=1;

    cin>>n;
    cout<<a<<" "<<b<<" ";
    for( int i=2;i<n;i++){
    
        int sum=a+b;
        cout<<sum<<"  ";

        a=b;
        b=sum;
       
        

    }
}