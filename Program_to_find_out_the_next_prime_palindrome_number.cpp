#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;
}
bool palin(int n){
    int sum=0,temp=n;
    while(temp){
        sum=sum*10+temp%10;
        temp/=10;
    }
    if(sum==n)
    return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    while(n){
        n++;
        if(palin(n)){
            if(prime(n)){
                cout<<n<<endl;
                break;
            }
        }
    }
}