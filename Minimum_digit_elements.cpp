#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int digit(int n){
    int c=0;
    while(n){
        n/=10;
        c++;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int count=INT_MAX;
    for(int i=0;i<n;i++){
        int d=digit(arr[i]);
        if(count==d){
            ans++;
        }else
        if(count>d){
            count=d;
            ans=1;
        }
    }
    // for(int i=0;i<n;i++){
    //     if(digit(arr[i])==count){
    //         ans++;
    //     }
    // }
    cout<<ans<<endl;
}