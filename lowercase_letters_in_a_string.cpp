#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int ans=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z')
        ans++;
    }
    cout<<ans;
}