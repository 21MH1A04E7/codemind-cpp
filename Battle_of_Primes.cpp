#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int n3=n1+n2+1;
    while(1){
        int c=0;
        for(int i=2;i<n3;i++){
            if(n3%i==0){
                n3++;
                c=1;
            }
        }if(c==0){
            cout<<n3-n2-n1;
            return 0;
        }
    }
}