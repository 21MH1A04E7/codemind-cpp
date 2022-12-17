#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,m=-1;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m=max(arr[i],m);
    }
    cin>>a>>b;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=a&&arr[i]<=b&&m<=arr[i]){
            cout<<"-1"<<endl;
            c=1;
            break;
        }
    }
    if(c==0)
    cout<<m<<endl;
}