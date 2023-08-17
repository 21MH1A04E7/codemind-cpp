#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    map<char,int>mpp;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            continue;
        }else{
            mpp[tolower(str[i])]++;
        }
    }
    for(auto it:mpp){
        if(it.second==1){
            cout<<it.first;
        }
    }
}