#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int>s;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0 && s.find(a)==s.end()){
            count++;
            s.insert(a);
        }
    }
    cout<<count<<endl;
}