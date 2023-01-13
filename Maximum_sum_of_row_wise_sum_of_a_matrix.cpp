#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int sum_r=0;
        for(int j=0;j<m;j++){
            sum_r+=arr[i][j];
        }
        ans=max(ans,sum_r);
    }
    cout<<ans<<endl;
}