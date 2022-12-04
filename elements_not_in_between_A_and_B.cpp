#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int a,b;
    cin>>a>>b;
    int flage=1;
    for(int i=0;i<n;i++){
        if(arr[i]>=a&&arr[i]<=b){
            continue;
        }else{
            flage=0;
            cout<<arr[i]<<" ";
        }
    }
    if(flage)
    cout<<"-1";
    delete arr;
}