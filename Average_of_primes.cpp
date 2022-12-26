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
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    float sum=0,c=0;
    for(int i=0;i<n;i++){
        if(prime(arr[i])){
            sum+=arr[i];
            c++;
        }
    }
    
    cout<<fixed<<setprecision(2)<<float(sum/c)<<endl;
}