#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=1;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            c=0;
            break;
        }
    }
    if(c==1)
    cout<<"True";
    else
    cout<<"False";
    delete arr;
}