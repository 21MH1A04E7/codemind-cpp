#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=1;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }else
        if(n%3==0){
            n=n/3;
        }else if(n%5==0){
            n=n/5;
        }else{
            c=0;
            break;
        }
    }
    if(c==0)
    cout<<"Not Ugly Number"<<endl;
    else
    cout<<"Ugly Number"<<endl;
}