#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int [n];
    set<int>s;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0 && s.find(arr[i])==s.end()){
            sum+=arr[i];
            s.insert(arr[i]);
        }
    }
    cout<<sum<<endl;
}