#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum=0;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    float ans=(sum/n);
    cout<<fixed<<setprecision(2);
    cout<<ans;
    delete arr;
}