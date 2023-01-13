#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=0;j<m-1;j++){
            if(arr[i][j]>arr[i][j+1]){
                c=0;
            }
        }
        ans+=c;
    }
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=0;j<m-1;j++){
            if(arr[i][j]<arr[i][j+1]){
                c=0;
            }
        }
        ans+=c;
    }
    cout<<ans<<endl;
}