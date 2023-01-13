#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int ans=0;
    for(int j=0;j<m;j++){
        int c=1;
        for(int i=0;i<n-1;i++){
            if(arr[i][j]>arr[i+1][j]){
                c=0;
            }
        }
        ans+=c;
    }
    for(int j=0;j<m;j++){
        int c=1;
        for(int i=0;i<n-1;i++){
            if(arr[i][j]<arr[i+1][j]){
                c=0;
            }
        }
        ans+=c;
    }
    
    cout<<ans<<endl;
}