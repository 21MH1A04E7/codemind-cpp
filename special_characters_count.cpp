#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int c=0;
    for(int i=0;i<str.length();i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str
        [i]<='Z')||str[i]==' ')
        {
            continue;
        }
        else{
            c++;
        }
    }
    cout<<c<<endl;
}