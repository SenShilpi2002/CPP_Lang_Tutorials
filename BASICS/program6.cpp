#include<iostream>
using namespace std;

int main(){

int n;
//cout<<"input is :"<<endl;
cin>>n;

int i=2;

while(i < n){

    if(n % i == 0){

        cout<<"The value is notprime for i: "<<i<< endl;
    }

    else{

    cout<<"The value is prime for i: "<<i<< endl;
    }

    i=i+1;
    
}
}


