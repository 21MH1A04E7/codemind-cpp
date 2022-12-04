#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    int a,b;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>a>>b;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b){
            continue;
        }else{
            sum+=arr[i];
        }
    }
    cout<<sum;
    delete arr;
}