#include<iostream>
using namespace std;
int main(){

int a[50];
int size;
cin>>size;
//take input in array
for(int i=0;i<size;i++){
    cin>>a[i];
}
int getMax(int a[] , int n );
//int n;
int max = INT_MIN;
for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}
return max;


int getMin(int a[] , int n );
//int n;
int min = INT_MAX;
for(int i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
}
return min;

cout<<"maximum value is : "<<getMax(a , n)<<endl;


}