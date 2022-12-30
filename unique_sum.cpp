#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        int x=arr[i];
        s.insert(x);
    }
    int sum=0;
    for(auto it:s)
    sum+=it;
    cout<<sum<<endl;
}