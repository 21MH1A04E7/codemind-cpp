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
    for(int i=0;i<m;i++){
        int sum_c=0;
        for(int j=0;j<n;j++){
            sum_c+=arr[j][i];
        }
        ans=max(ans,sum_c);
    }
    cout<<ans<<endl;
}