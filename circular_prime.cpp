#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int fun(int n){
    int sum=0;
    while(n){
        sum=sum*10+n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int flage=1;
    if(prime(n)){
        int sum=fun(n);
        if(prime(sum)){
            flage=0;
            cout<<"circular prime"<<endl;
        }else{
            flage=0;
            cout<<"prime but not a circular prime"<<endl;
        }
    }
    if(flage){
        cout<<"not prime"<<endl;
    }
}