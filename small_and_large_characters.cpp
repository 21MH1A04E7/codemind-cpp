#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string word="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            char s='z',l='A';
            for(int i=0;i<word.length();i++){
                s=min(s,word[i]);
                l=max(l,word[i]);
            }
            cout<<s<<" "<<l<<" ";
            word="";
        }else{
             word+=str[i];
        }
       
    }
char s='z',l='A';
for(int i=0;i<word.length();i++){
     s=min(s,word[i]);
     l=max(l,word[i]);
}
 cout<<s<<" "<<l<<endl;
}