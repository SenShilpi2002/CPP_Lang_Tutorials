#include<iostream>
using namespace std;
int main(){

    int n,f=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            break;
        }
    if(f==0){
        cout<< "prime";
    }
    else{
        cout<<"not prime"; 
    }
        


            
        
    }


}