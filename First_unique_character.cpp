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
    bool flag=true;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '&&mpp[tolower(str[i])]==1){
            cout<<str[i];
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"-1"<<endl;
    }
}