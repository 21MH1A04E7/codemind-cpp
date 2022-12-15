#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i+2<n;i++){
        if(arr[i]%2!=0&&arr[i+2]%2!=0){
            if(arr[i+1]%2==0){
                c++;
            }
        }
    }
    cout<<c;
    delete arr;
}