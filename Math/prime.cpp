#include<bits/stdc++.h>
using namespace std;
void prime(int n){

    if(n==0 && n==1){
        cout<<"PRIME NUMBERS..,"<<endl;
    }
    for(int i=2;i<=n;i++){
        if(n%i!=0){
            cout<<"PRIME NUMBERS..,"<<endl;
            break;
        }
        else{
            cout<<"NON-PRIME NUMBERS..,"<<endl;
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    prime(n);
}