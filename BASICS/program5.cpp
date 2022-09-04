#include<iostream>
using namespace std;

int main(){

    char ch;
    //cout<<"the charactor"<<ch<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"charactor is belongs lower case";
    }
    else if(ch>='A'&& ch<='Z'){
        cout<<"charactor is belongs upper case";
    }

    else {
        cout<<"charactor is numeric";
    }

}