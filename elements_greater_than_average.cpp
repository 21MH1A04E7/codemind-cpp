#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int c=0;
    int ave=sum/n;
    for(int i=0;i<n;i++){
        if(arr[i]>=ave){
           c++;
        }
    }
    cout<<c;
    delete arr;
}