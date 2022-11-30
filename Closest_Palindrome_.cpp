#include<iostream>
using namespace std;
bool fun(int n){
    int temp=n;
    int sum=0;
    while(temp){
        sum=sum*10+temp%10;
        temp/=10;
    }
    if(sum==n)
    return true;
    else
    return false;
}
int main(){
    int n;
    cin>>n;
    int temp=n,m=n;
    int c1=0,c2=0;
    while(1){
        c1++;
        temp++;
        if(fun(temp)){
            break;
        }
    }
    while(1){
        c2++;
        m--;
        if(fun(m)){
            break;
        }
    }
    if(c1==c2){
        cout<<m<<" "<<temp<<endl;
    }
    if(c1>c2){
        cout<<m<<endl;
    }
}