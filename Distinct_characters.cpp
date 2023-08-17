#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    set<char>st;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            continue;
        }else{
            st.insert(tolower(str[i]));
        }
    }
    for(auto it:st){
        cout<<it;
    }
}