#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>even;
    vector<int>odd;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
        even.push_back(arr[i]);
        else
        odd.push_back(arr[i]);
    }
    int len1=even.size(),len2=odd.size();
    int i=0,j=0;
    while(i<len1&&j<len2){
        cout<<even[i]<<" "<<odd[j]<<" ";
        i++,j++;
    }
    while(i<len1){
        cout<<even[i]<<" ";
        i++;
    }
    while(j<len2){
        cout<<odd[j]<<" ";
        j++;
    }
    if(n%2!=0){
        cout<<"0"<<endl;
    }
}