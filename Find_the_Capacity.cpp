#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    long long int num=2*a*b*c*512;
    cout<<(num/1024)<<"KB"<<endl;
}