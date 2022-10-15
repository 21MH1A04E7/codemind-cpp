#include<iostream>
using namespace std;
int main(){
    int n,m,evensum=0,oddsum=0;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(i%2==0){
                evensum+=arr[i][j];
            }else{
                oddsum+=arr[i][j];
            }
        }
    }cout<<evensum<<" "<<oddsum;
}