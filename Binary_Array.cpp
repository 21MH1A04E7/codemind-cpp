#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]==1||arr[i]==0){
            continue;
        }else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    delete arr;
}