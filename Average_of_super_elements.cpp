#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int flag=0;
    float sum=0,c=0;
    for(auto it:m){
        if(it.first==it.second){
            c++;
            sum+=it.first;
            flag=1;
        }
    }
    if(flag)
    cout<<fixed<<setprecision(2)<<sum/c<<endl;
    else
    cout<<"-1";
}