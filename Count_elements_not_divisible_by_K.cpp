#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int c=0;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%k!=0)
        c++;
    }
    cout<<c<<endl;
    delete arr;
}