#include<iostream>
#include<math.h>
using namespace std;
int count(int num){
    int c=0;
    while(num){
        c++;
        num/=10;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int c=count(n);
    int ans=0,temp=n;
    while(temp){
        ans+=pow(temp%10,c);
        temp/=10;
        c--;
    }if(ans==n)
    cout<<"True";
    else
    cout<<"False";
}