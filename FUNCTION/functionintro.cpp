#include<iostream>
using namespace std;

int power(){
    int a,  b;
    cout<<"Enter the values of a nd :"<<endl; 
    cin>>a>>b;
    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}


int main(){
    int ans=power();
    cout<<"The answer is : "<<ans<<endl;

/*    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<"answer is :"<<answer<<endl;

    int c,d;
    cout<<"Enter the value of c and d : "<<endl;
    cin>>c>>d;
    int result=power(c,d);
    cout<<"result is : "<<result<< endl;
    return 0;

*/
}