#include<iostream>
using namespace std;
int fun(int n){
    int sum=0;
    while(n){
        int r=n%10;
        sum=r*r+sum;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    while(n){
        if(n==1)
        {
            cout<<"True";
            break;
        }
        if(n<10){
            cout<<"False";
            break;
        }
        n=fun(n);
    }
}