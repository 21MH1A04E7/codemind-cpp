#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int binary=0;
    int c=0;
    for(int i=n-1;i>=0;i--){
        binary+=arr[i]*pow(2,c);
        c++;
    }
    cout<<binary<<endl;
}