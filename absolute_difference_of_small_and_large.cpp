#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string word="";
    int small=0,large=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            char s='z';
            char l='A';
            for(int i=0;i<word.length();i++){
                s=min(s,word[i]);
                l=max(l,word[i]);
            }
            small=int(s);
            large=int(l);
            cout<<abs(small-large)<<" ";
            word="";
        }else{
             word+=str[i];
        }
       
    }
           char s='z';
            char l='A';
            for(int i=0;i<word.length();i++){
                s=min(s,word[i]);
                l=max(l,word[i]);
            }
            small=int(s);
            large=int(l);
            cout<<abs(small-large);
            
}