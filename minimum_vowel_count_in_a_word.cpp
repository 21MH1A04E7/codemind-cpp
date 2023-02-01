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
    int ans=INT_MAX,count=0;
    for(int i=0;i<str.length();i++){
        if(fun(str[i]))
        count++;
        if(str[i]==' '){
            ans=min(ans,count);
            count=0;
        }
    }
    ans=min(ans,count);
    cout<<ans<<endl;
    
}