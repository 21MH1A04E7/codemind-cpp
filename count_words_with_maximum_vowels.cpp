#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool fun(char s){
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||
    s=='A'||s=='E'||s=='I'||s=='O'||s=='U'){
        return true;
    }else{
        return false;
    }
}
int main(){
    string str;
    getline(cin,str);
    int ans=0,count=0;
    for(int i=0;i<str.length();i++){
        if(fun(str[i]))
        count++;
        if(str[i]==' '){
            ans=max(ans,count);
            count=0;
        }
    }
    ans=max(ans,count);
    int c=0,finalans=0;
    for(int i=0;i<str.length();i++){
        if(fun(str[i]))
        c++;
        if(str[i]==' '){
            if(ans==c)
            finalans++;
            c=0;
        }
    }
    if(c==ans)
    finalans++;
    cout<<finalans<<endl;
    
}