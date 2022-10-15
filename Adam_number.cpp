#include<iostream>
using namespace std;
int reverse(int num){
    int sum=0;
    while(num){
        sum=sum*10+num%10;
        num/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int sqr=n*n;
    int rev=reverse(n);
    int revsqr=rev*rev;
    int ans=reverse(revsqr);
    if(sqr==ans){
        cout<<"True";
    }else{
        cout<<"False";
    }
    
}