/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    unordered_map<char,int>mpp;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            continue;
        }else{
            mpp[tolower(str[i])]++;
        }
    }
    cout<<mpp.size()<<endl;
}