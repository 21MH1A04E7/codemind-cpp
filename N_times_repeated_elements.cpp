#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>mpp;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int k;
    cin>>k;
    int flage=1;
    for(int i=0;i<n;i++){
        if(mpp[arr[i]]==k){
            cout<<arr[i]<<" ";
            mpp[arr[i]]=-1;
            flage=0;
        }
    }
    if(flage)
    cout<<"-1"<<endl;
}