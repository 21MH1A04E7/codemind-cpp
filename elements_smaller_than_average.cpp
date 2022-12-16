#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    int sum=0,c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int ave=sum/n;
    for(int i=0;i<n;i++){
        if(arr[i]<=ave)
        c++;
    }
    cout<<c;
    delete arr;
}