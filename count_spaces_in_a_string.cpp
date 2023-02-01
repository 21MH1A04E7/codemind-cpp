#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=0;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==' ')
        ans++;
    }
    cout<<ans<<endl;
}